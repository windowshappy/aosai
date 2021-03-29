#include<iostream>
#include<cstdio>
using namespace std;
int a[8],b[8];
struct nade{
	int n,m;
}maxn;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	for(int i=1;i<=7;i++){
		cin>>a[i]>>b[i];
		a[i]=a[i]+b[i]-8;
		if(a[i]>maxn.n){
			maxn.n=a[i];
			maxn.m=i;
		}
	}
	cout<<maxn.m;
	fclose(stdin);
	fclose(stdout);
}
