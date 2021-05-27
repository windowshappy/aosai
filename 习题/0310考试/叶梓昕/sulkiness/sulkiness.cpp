#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,m=0,d;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>=8&&a+b>m)
		{
			m=a+b;
			d=i;
		}
	}
	if(m==0) cout<<"0";
	else cout<<d;
	return 0;
	fclose(stdin);
	fclose(stdout);
}
