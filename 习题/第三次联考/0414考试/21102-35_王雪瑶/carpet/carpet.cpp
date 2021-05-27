#include<iostream>
#include<cstdio>
using namespace std;
int n,x,y,c1,c2,o1,o2;
long long a[10002][10002];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>c1>>c2>>o1>>o2;
		for(int m=c1;m<=o1;m++){
			for(int j=c2;j<=o2;j++){
				a[m][j]=i;
			}
		}
	}
	cin>>x>>y;
	if(a[x][y]==0){
		cout<<-1;
	}
	else{
		cout<<a[x][y];
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
