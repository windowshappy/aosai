#include<bits/stdc++.h>
using namespace std;
int main(){
	int l,h,k,n,f[50][50],t=2;
	cin>>n;
	
	l=(n-1)/2+1;
	h=1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			f[i][j] = 0;
		}
	}
	f[1][(n-1)/2+1] = 1;
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			if(t==n*n+1) break;
			if(h==1&&l!=n){
				f[n][l+1] = t;
				h=n;l++;
			}
			else if(l==n&&h!=1){
				f[h-1][1] = t;
				h--;l=1;
			}
			else if(h==1&&l==n){
				f[h+1][l] = t;
				h++;
			}
			else if(h!=1&&l!=n&&f[h-1][l+1]==0){
				f[h-1][l+1] = t;
				h--;l++;
			}
			else if(h!=1&&l!=n&&f[h-1][l+1]!=0){
				f[h+1][l] = t;
				h++;
			}
			t++;
		}
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=n;j++){
			cout<<f[i][j]<<" ";
		}
		cout<<endl;
	}
}
