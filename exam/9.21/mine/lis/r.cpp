#include<bits/stdc++.h>

using namespace std;

int main(){
    int n, a[1001], f[1001];
    cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i];
        f[i] = 1;
    }
    for (int i = n; i >= 1;i--){
        for (int j = 1; j <= n; j++)
        {
            if(a[j]>a[i])
                f[i] = max(f[j] + 1, f[i]);
        }
        
    }
    cout << f[1];
    return 0;
}