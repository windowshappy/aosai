#include<bits/stdc++.h>

using namespace std;

int n;
int d[1000];

int main()
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> d[i];
    }
    int ans = -1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if(d[i] < d[j])
                ans = max(ans, d[i] + d[j] - (d[i] & d[j]));
        }
        
    }
    cout << ans;

    return 0;
}
