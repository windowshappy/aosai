#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long s=0,n,i,j,t=1;
	cin>>n;
	
	for(i=1;i<=n;i++){
		for(j=1;j<=i;j++){
			t*=j;
		}
		s+=t;
		t=1;
	}
	printf("%lld",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
