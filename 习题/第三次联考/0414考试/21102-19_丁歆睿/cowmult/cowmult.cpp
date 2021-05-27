#include <cstdio>
#include <string>
#include <iostream>

using namespace std;

string a,b;
long long ans;

void inp() {
	cin>>a;
	cin>>b;
}

void work() {
	
	for(register long long i=0; i<a.size(); i++) {
		for(register long long j=0; j<b.size(); j++) {
			ans+=(a[i]-'0')*(b[j]-'0');
		}
		
	}
}

int main() {
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	
	inp();
	work();
	
	printf("%lld",ans);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
