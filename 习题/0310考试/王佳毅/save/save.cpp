#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int x=0,y,z=0;
	for(int i=1;i<=12;i++)
	{
		x+=300;
		cin>>y;
		x=x-y;
		if(x>=0)
		{
			z+=x-x%100;
			x=x%100;
		}	
		if(x<0)
		{
			cout<<-i;
			return 0;
		}
	}
	cout<<x+z*1.2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
