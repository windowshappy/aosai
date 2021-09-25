#include<bits/stdc++.h>

using namespace std;
int a[22];
int main()
{
    int n, k, m;
    while(true){
        cin >> n >> k >> m;
        if(n==0 and k==0 and m==0)
            break;
        for (int i = 1; i <= n; i++)
        {
            a[i] = i;
        }
        int i = 1;
        for (; i <= k;){
            if(a[i] !=0){
                i++;
                a[i] = 0;
            }
        }
        printf("%3d", a[i]);
        int t = 0;
        for (i=n; t<m ;){
            if(a[i] !=0){
                i--;
                t++;
                a[i] = 0;
            }
                
        }
        printf("%3d,", a[i]);
    }
    return 0;
}
