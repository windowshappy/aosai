#include<bits/stdc++.h>

using namespace std;

const int MAXN = 2e5 + 7;

struct tree
{
    int left, right;
} a[MAXN];

int n;

int dfs(int x){
    if(!x)
        return 0;
    return max(dfs(a[x].left), dfs(a[x].right)) + 1;
}

int main()
{
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        cin >> a[i].left >> a[i].right;
    }
    cout << dfs(1);
    return 0;
}
