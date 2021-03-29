#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b;
	int c,d=0,e;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		c=a+b;
		if(c>d)
		{
			d=c;
			e=i;
		}
	}
	if(d<=8) cout<<0;
	else cout<<e;
	fclose(stdin);fclose(stdout);
	return 0;
}
