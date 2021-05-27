#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("reverse.in,","r",stdin);
	freopen("reverse.out","w",stdout);
	int a;
	cin>>a;
	if(a==0)
	{
		cout<<a;
	}
	int b=a/1000;
	int c=a%1000/100;
	int d=a%1000%100/10;
	int e=a%1000%100%10;
	if(a<0)
	{
		if((e==0)&&(d!=0)&&(c!=0)&&(b!=0))
		{
			cout<<"-"<<-d<<-c<<-b;
		}
		else if((e==0)&&(d==0)&&(c!=0)&&(b!=0))
		{
			cout<<"-"<<-c<<-b;
		}
		 else if((e==0)&&(d==0)&&(c==0)&&(b!=0))
		{
			cout<<"-"<<-b;
		}
		else
		cout<<"-"<<-e<<-d<<-c<<-b;
	}
	if(a>0)
	{
		if((e==0)&&(d!=0)&&(c!=0)&&(b!=0))
		{
			cout<<d<<c<<b;
		}
		
		else if((e==0)&&(d==0)&&(c!=0)&&(b!=0))
		{
			cout<<c<<b;
		}
		else if((e==0)&&(d==0)&&(c==0)&&(b!=0))
		{
			cout<<b;
		}
		else
		cout<<e<<d<<c<<b;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
