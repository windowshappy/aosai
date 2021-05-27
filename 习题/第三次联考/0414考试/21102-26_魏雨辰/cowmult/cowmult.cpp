#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
char a[100],b[100];
int main() {
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long int ans=0;
	cin>>a>>b;
	for(int i=0;i<strlen(a);i++) {
		for(int j=0;j<strlen(b);j++) {
			ans+=(a[i]-48)*(b[j]-48);
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
