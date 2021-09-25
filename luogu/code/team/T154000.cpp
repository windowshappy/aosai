#include<bits/stdc++.h>

using namespace std;
int n, ans;
void dfs(int x, int tempNum){
    if(x == n&&tempNum == n-1){
        ans++;
        return;
    }
    if(tempNum>n-1)
        return;
    if(tempNum == -1)
        tempNum = 0;
    tempNum++;
    dfs(x + tempNum, tempNum);
    dfs(x - tempNum, tempNum);
}

int main()
{
    
    cin >> n;
    dfs(-1, -1);
    cout << ans;
    return 0;
}
