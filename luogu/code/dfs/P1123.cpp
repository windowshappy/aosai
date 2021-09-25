#include<bits/stdc++.h>

using namespace std;
int number[10][10];
int canuse[10][10];
int n, m, t, maxn = -34343;
int dx[9]={0,1,1,1,0,0,-1,-1,-1},dy[9]={0,1,-1,0,-1,1,0,1,-1};
void dfs(int x, int y, int num){

    if(x>m){
        x = 1;
        y++;
    }
    if(y>n){
        if(num>maxn){
            maxn = num;
        }
        return;
    }
    if(canuse[y][x] == 0){
        for (int i = 1; i < 9; i++)
        {
            canuse[y + dx[i]][x + dy[i]]++;
        }
        dfs(x + 2, y, num + number[y][x]);
        for (int i = 1; i < 9; i++)
        {
            canuse[y + dx[i]][x + dy[i]]--;
        }
    }
    dfs(x + 1, y, num);
}

int main()
{
    
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> n >> m;
        for (int x = 1; x <= n; x++)
        {
            for (int y = 1; y <= m; y++)
            {
                cin >> number[x][y];
            }
            
        }
        dfs(1, 1, 0);
        cout << maxn << endl;
        maxn = -34234;
        memset(canuse, 0, sizeof(canuse));
    }
    
    return 0;
}
