#include<iostream>
#include<string>
#include<cstdio>
int e[10002][10002],n,a,b,c,d,ac,bc;
using namespace std;
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a>>b>>c>>d;
		e[a][b]=i;
		for(int j=a;j<c;j++){
			for(int j2=b;j2<d;j2++){
				e[j][j2]=i;
			}
		}
		
	}
	cin>>ac>>bc;
	if(e[ac][bc]==0){
		cout<<"-1";
		return 0;
	}
	cout<<e[ac][bc];
	fclose(stdin);fclose(stdout);
	return 0;
} 
