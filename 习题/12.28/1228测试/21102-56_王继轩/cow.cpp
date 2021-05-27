#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int n,x;
	cin>>x>>n;
	long long s=1,a=0;
	for(int i=1;i<=n;i++){
		s=s*x+s;
		
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
