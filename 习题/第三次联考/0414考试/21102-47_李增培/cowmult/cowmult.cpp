#include<bits/stdc++.h>
using namespace std;
char a[20],b[20];//¾ÅÎ»
long long n; 
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	for(int i=0;i<strlen(a);i++){
		for(int j=0;j<strlen(b);j++){
			n+=(a[i]-'0')*(b[j]-'0');
		}
	}
	cout<<n;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
