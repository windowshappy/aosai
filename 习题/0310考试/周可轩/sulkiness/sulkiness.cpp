#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,summ=0,maxn=0,maxi=0;
	for (int i=1;i<=7;++i){
		cin>>a>>b;
		summ=a+b;
		if(summ>maxn){
			maxn=summ;
			maxi=i;
		}
	}
	cout<<maxi;
	fclose(stdin);fclose(stdout);
	return 0;
}
