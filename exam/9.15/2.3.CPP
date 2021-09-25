#include <iostream>
#include <queue>
using namespace std;

const int maxl = 20000000;

class Map
{
    struct item
    {
        string key;
        int value;
    } d[maxl];
    int cnt;

public:
    int find(string x)
    {
        for (int i = 0; i < cnt; ++i)
            if (d[i].key == x)
                return d[i].value;
        return -1;
    }
    static int end() { return -1; }
    void insert(string k, int v)
    {
        d[cnt].key = k;
        d[cnt++].value = v;
    }
} s[2];

class Queue
{
    string q[maxl];
    int head, tail;

public:
    void pop() { ++head; }
    string front() { return q[head + 1]; }
    bool empty() { return head == tail; }
    void push(string x) { q[++tail] = x; }
} q[2];

string st0, st1;
int m;

string LtoR(string s, int L, int R)
{
    string t = s;
    char tmp = t[L];
    for (int i = L; i < R; ++i)
        t[i] = t[i + 1];
    t[R] = tmp;
    return t;
}

string RtoL(string s, int L, int R)
{
    string t = s;
    char tmp = t[R];
    for (int i = R; i > L; --i)
        t[i] = t[i - 1];
    t[L] = tmp;
    return t;
}

bool check(string st, int p, int step)
{
    if (s[p].find(st) != s[p].end())
        return false;
    ++step;
    if (s[p ^ 1].find(st) == s[p].end())
    {
        s[p].insert(st, step);
        q[p].push(st);
        return false;
    }
    cout << s[p ^ 1].find(st) + step << endl;
    return true;
}

int main()
{
    cin >> st0 >> st1;
    int len = st0.length();
    if (len != st1.length())
    {
        cout << -1 << endl;
        return 0;
    }
    if (st0 == st1)
    {
        cout << 0 << endl;
        return 0;
    }
    cin >> m;
    s[0].insert(st0, 0);
    s[1].insert(st1, 0);
    q[0].push(st0);
    q[1].push(st1);
    for (int p = 0;
         !(q[0].empty() && q[1].empty());
         p ^= 1)
    {
        string st = q[p].front();
        q[p].pop();
        int step = s[p].find(st);
        if ((p == 0 &&
             (check(LtoR(st, m, len - 1), p, step) ||
              check(RtoL(st, 0, m), p, step))) ||
            (p == 1 &&
             (check(LtoR(st, 0, m), p, step) ||
              check(RtoL(st, m, len - 1), p, step))))
            return 0;
    }
    cout << -1 << endl;
    return 0;
}