#include <bits/stdc++.h>

using namespace std;

bool Awin[500001];
bool Nowin[500001];

int main()
{
    int n;
    long long x, k;
    cin >> n >> k >> x;
    queue<int> A, B;
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        A.push(t);
    }
    for (int i = 0; i < n; i++)
    {
        int t;
        cin >> t;
        B.push(t);
    }
    for (int i = 0; i < n; i++)
    {
        if (A.front() == 0 && B.front() == 1)
            Awin[i] = 1;
        else if (A.front() == 1 && B.front() == 2)
            Awin[i] = 1;
        else if (A.front() == 2 && B.front() == 0)
            Awin[i] = 1;
        else if (A.front() == B.front())
            Nowin[i] = 1;
        else
            Awin[i] = 0;
        A.pop();
        B.pop();
    }
    int t = 0;
    long long a = 0, b = 0;
    for (long long i = 0; i < k; i++)
    {
        if (!Nowin[t])
        {
            if (Awin[t])
                a++;
            else
                b++;
        }

        t++;
        if (t >= n)
            t = 0;
    }
    cout << a << " " << b;
    return 0;
}
