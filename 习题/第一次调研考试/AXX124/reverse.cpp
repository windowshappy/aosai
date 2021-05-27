#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int a;
	cin>>a;
	cout<<a%10*1000+a/10%10*100+a/100%10*10+a/1000;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
