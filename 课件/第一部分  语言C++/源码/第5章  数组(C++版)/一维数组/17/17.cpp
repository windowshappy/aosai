#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	freopen("16.in", "r", stdin);
//	freopen("16.out", "w", stdout);
	int a,b,g,k,x,y,n;
	int l[100000];
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>g>>k;
		l[i]=(a,b,g,k);
	}
	fclose(stdin);
//	fclose(stdout);
	return 0;
}

