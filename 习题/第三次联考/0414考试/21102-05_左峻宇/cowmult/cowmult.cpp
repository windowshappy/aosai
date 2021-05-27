#include<iostream>
#include<cstdio>
using namespace std;

int m,n;
int t1,t2,v1[15],v2[15];
long long ans;

int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	
	cin>>m>>n;
	
	while(m!=0){
		v1[++t1]=m%10;
		m/=10;
	}
	
	while(n!=0){
		v2[++t2]=n%10;
		n/=10;
	}
	
	for(int i=1;i<=t1;i++){
		for(int j=1;j<=t2;j++){
			ans+=v1[i]*v2[j];
		}
	}
	
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
