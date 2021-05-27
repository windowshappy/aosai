#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,m,w=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		a+=b;
		if(a>8&&a>m){
			m=a;
			w=i;
		}
	}
	cout<<w;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
