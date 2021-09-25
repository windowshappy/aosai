#include <bits/stdc++.h>

using namespace std;

#define Inf 2423423

map<string, bool> mp;
int n, k = 2;
string a, b;
string key[10], code[10];

int ans = Inf;

void dfs(int step, string now)
{
    if (step > k)
        return;

    if (now == b)
    {
        ans = min(ans, step);
        return;
    }
    if (mp[now])
        return;
    mp[now] = true;
    string temp;
    for (int i = 0; i < n; i++)
    {
        int t = -1;
        while (true)
        {
            t = now.find(key[i], t + 1);
            if (t != -1)
            {
                temp = now;
                temp.erase(t, key[i].size());
                temp.insert(t, code[i]);
                //now.replace(t, t + key[i].size(), code[i]);
                dfs(step + 1, temp);
            }
            else
                break;
        }
    }
}

int main()
{

    cin >> a >> b;
    while (cin >> key[n] >> code[n])
        n++;
    while (ans == Inf)
    {
        dfs(0, a);
        mp.clear();
        k++;
        if (k >= 11)
            break;
    }

    if (ans == Inf)
    {
        cout << "NO ANSWER!";
        return 0;
    }

    cout << ans;

    return 0;
}
