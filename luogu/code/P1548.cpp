#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    int n, m, z = 0, c=0;
    cin >> n >> m;
    
    for (int i = 0; i <= n; i++)
    {
        for (int j = 0; j <= m; j++)
        {
            for (int x = i+1; x <= n; x++)
            {
                for (int y = j+1; y <= m; y++)
                {
                    if(x-i==y-j)
                        z++;
                    else
                        c++;
                }
                
            }
            
        }
    }
    cout << z << " " << c;

    return 0;
}
