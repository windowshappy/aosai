#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long n,sum=0,a;cin>>n;
	for (int i=1;i<=n;++i){
		a=1;
		for (int j=1;j<=i;++j){
			a*=j;
		}
		sum+=a;
	}
	cout<<sum;
	fclose(stdin);fclose(stdout);
	return 0;
}
