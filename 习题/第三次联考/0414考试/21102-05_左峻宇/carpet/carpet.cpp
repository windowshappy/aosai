#include<iostream>
#include<cstdio>
using namespace std;

int v1[11500],v2[11500];

int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	
	int n,a[11500],b[11500],g,k,x,y;
	
	cin>>n;
	
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>g>>k;
		v1[i]=a[i]+g;
		v2[i]=b[i]+k;
		
	}
	
	cin>>x>>y;
	
	for(int i=n;i>=1;i--){
		
		if(x>=a[i] and x<=v1[i] and y>=b[i] and y<=v2[i]){
			cout<<i;
			fclose(stdin);
			fclose(stdout);
			return 0;
		}
	}
	
	cout<<"-1";
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
