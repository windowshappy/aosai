#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int n;
	cin>>n;
	long long s=1,a=0,b;
	for(int i=1;i<=n;i++){
		s=i*s;
	a=a+s;
	}
	
	cout<<a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
