#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b,x,y,z,s=0;
	cin>>a>>b;
	for(int i=a;i<=b;i++)
	{
		x=i/10000;
		y=i%10000/100;
		z=i%100;
		if((x/1000==z%10)&&(x%1000/100==z/10)&&(x%100/10==y%10)&&(x%10==y/10))
		{
			if((x%100!=0&&x%4!=0)||(x%400!=0))
			{
				if(y==4||y==6||y==9||y==11)
				{
					if(z<=30)	s++;
				}
				else if(y==2)
				{
					if(z<=28)	s++;
				}
				else if(y<=12)
				{
					if(z<=31)	s++;
				}
			}
			else
			{
				if(y==4||y==6||y==9||y==11)
				{
					if(z<=30)	s++;
				}
				else if(y==2)
				{
					if(z<=29)	s++;
				}
				else if(y<=12)
				{
					if(z<=31)	s++;
				}				
			}
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

