#include <bits/stdc++.h>

using namespace std;
vector<int> v[100003];
int ji[100003], ou[100003];
int n, m, q, x, y;

void bfs()
{
    memset(ji, 127 / 3, sizeof(ji));
    memset(ou, 127 / 3, sizeof(ou));
    queue<pair<int, int> > Q;
    Q.push(make_pair(1, 0));
    for (int i = 0; i < v[1].size(); i++)
    {
        ji[v[1][i]] = 1;
        Q.push(make_pair(v[1][i], 1));
    }
    
    while (!Q.empty())
    {
        int x = Q.front().first, y = Q.front().second;
        Q.pop();
        for (int i = 0; i < v[x].size(); i++)
        {
            if (y % 2 == 1)
            {
                if(y+1<ou[v[x][i]]){
                    ou[v[x][i]] = y + 1;
                    Q.push(make_pair(v[x][i], y + 1));
                }
            }
            else{
                if(y+1<ji[v[x][i]]){
                    ji[v[x][i]] = y + 1;
                    Q.push(make_pair(v[x][i], y + 1));
                }
            }
        }
    }
}

int main()
{
    cin >> n >> m >> q;
    for (int i = 0; i < m; i++)
    {
        cin >> x >> y;
        v[x].push_back(y);
        v[y].push_back(x);
    }
    bfs();
    for (int i = 0; i < q; i++)
    {
        cin >> x >> y;
        if(y%2 == 0){
            if(ou[x]>y)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
        else{
            if(ji[x]>y)
                cout << "No" << endl;
            else
                cout << "Yes" << endl;
        }
    }
    
    return 0;
}
