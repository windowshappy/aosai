#include<iostream>
#include<cstdio>
using namespace std;
int rn(int a);

int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int d1,d2,s=0,d=0;
	cin>>d1>>d2;
	int x=d1/10000,y=d2/10000;
	for(int i=x;i<=y;i++)
	{
		int n=i;
		while(n!=0)
		{
			d=d*10+n%10;
			n/=10;
		}
		int y=d/100,r=d%100;
		d=0;
		if((y==1)||(y==3)||(y==5)||(y==7)||(y==8)||(y==10)||(y==12))
		{
			if((r<=31)&&(r>0))
			{
				s++;
			}
		}
		else if((y==4)||(y==6)||(y==9)||(y==11))
		{
			if((r<=30)&&(r>0))
			{
				s++;
			}
		}
		else if(y==2)
		{
			if(rn(i)==1)
			{
				if((r<=29)&&(r>0))
				{
					s++;
				}
			}
			else
			{
				if((r<=28)&&(r>0))
				{
					s++;
				}
			}
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

int rn(int i)
{
	if(i%100==0)
	{
		if(i%400==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
	else
	{
		if(i%4==0)
		{
			return 1;
		}
		else
		{
			return 0;
		}
	}
}

