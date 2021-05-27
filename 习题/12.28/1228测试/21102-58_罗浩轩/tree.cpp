#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int a,a1,b,b1,l,t,yt;
	cin>>l>>a>>a1>>b>>b1;
	t=l+1;
	if(a1>b&&a1<b1)
	{
		yt=b1-a+1;
	}
	if(a1<b&&a1<b1)
	{
		yt=(a1-a)+(b1-b)+2;
	}
	cout<<t-yt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
