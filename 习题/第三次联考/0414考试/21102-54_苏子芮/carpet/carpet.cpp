#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	freopen("carpet.in", "r", stdin);
	freopen("carpet.out", "w", stdout);
	int n,a[10001],b[10001],g[10001],k[10001],x,y, z=-1;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	
	for(int i=0;i<n;i++){
		for(int j=a[i]; j<=a[i]+g[i];j++){
			for(int kk=b[i];kk<=b[i]+k[i];kk++){
				if(j==x&&kk==y){
					z=i+1;
				}
			}
		}
	}
	
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
