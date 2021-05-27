#include<iostream>
#include<cstdio>
using namespace std;
int cp[10010][10010];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,a,b,g,k;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>g>>k;
		int a1=a+g,b1=b+k;
		for(;a<=a1;a++){
			for(;b<=b1;b++){
				cp[a][b]=i;
			}
		}
	}
	int x,y;
	cin>>x>>y;
	if(cp[x][y]!=0){
		cout<<cp[x][y];
	}
	else{
		cout<<-1;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
