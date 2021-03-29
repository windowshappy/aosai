#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a,s=0;
	cin>>a;
	while(a!=0){
		s=s*10+a%10;
		a=a/10;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
