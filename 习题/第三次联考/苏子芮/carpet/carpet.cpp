#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	int n,a[10001],b[10001],g[10001],k[10001],x,y, z=-1;
	bool isEnd = false;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a[i]>>b[i]>>g[i]>>k[i];
	}
	cin>>x>>y;
	
	for(int i=0;i<n;i++){
		if (a[i]<=x&&a[i]+g[i]>=x)
		{
			if (b[i]<=y&&b[i]+k[i]>=y)
			{
				z=i+1;
			}
		}
	}
	
	cout<<z;
	return 0;
}
