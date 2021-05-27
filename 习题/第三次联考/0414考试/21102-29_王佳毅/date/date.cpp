#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","w",stdin);
	freopen("date.out","r",stdout);
	int a,b;
	cin>>a>>b;
	int x1,x2,x3,x4,x5,x6,x7,x8;
	x1=a/10000000;
	x2=a%10000000/1000000;
	x3=a%1000000/100000;
	x4=a%100000/10000;
	x5=a%10000/1000;
	x6=a%1000/100;
	x7=a%100/10;
	x8=a%10;
	if(a==b)
	{
		if(x1==x8&&x2==x7&&x3==x6&&x4==x5)
		{
			cout<<"1";
		}
		else
		cout<<"0";
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
