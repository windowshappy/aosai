#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int x,s,y;
	int a=0;
	for(int i=1; i<=12; i++)
	{
		x=a+300;
		a=x-s;
	}
	for(int i=1; i<=12; i++)
	{
		a=x-y;
		if(a>=100)
		a=a-a/100-s;
		cout<<a;
	}
	if(a<0)
	  cout<<-x;
	else
	  cout<<a*12+a/100*1.2;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
