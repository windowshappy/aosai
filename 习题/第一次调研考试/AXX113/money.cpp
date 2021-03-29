#include<cstdio>
#include<iostream>
using namespace std;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	long long n;
	cin>>n;
	if(n<=150) printf("%0.1lf",n*0.4463);
	else if(151<=n && n<=400) printf("%0.1lf",150*0.4463+(n-150)*0.4663);
	else if(n>=401) printf("%0.1lf",150*0.4463+(400-150)*0.4663+(n-400)*0.5663);
	fclose(stdin); fclose(stdout);
	return 0;
} 
