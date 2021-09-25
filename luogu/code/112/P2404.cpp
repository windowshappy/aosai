#include <bits/stdc++.h>

using namespace std;

int n;

string int2string(int a)
{
    if (a == 0)
        return "0";
    string ans;
    int tt = a;
    char tmp;
    while (tt > 0)
    {
        tmp = tt % 10;
        ans = char(tmp + 48) + ans;
        tt /= 10;
    }
    return ans;
}
void dfs(int x, int a, string ans)
{
    if (x == n)
    {
        cout << ans << endl;
        return;
    }
    else if(x>n)
        return;
    for (int i = a; i < n; i++)
    {
        if (x + i <= n)
        {
            if (ans.empty())
            {
                dfs(x + i, i, int2string(i));
            }
            else
            {
                dfs(x + i, i, ans.append("+" + int2string(i)));
            }
        }
        else{
            return;
        }
    }
}

int main()
{

    cin >> n;
    dfs(0, 1, "");
    return 0;
}
