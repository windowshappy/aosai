#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen ("date.in","r",stdin);
	freopen ("date.out","w",stdout);
	
	int a1,a2,a3,b1,b2,b3,s=0,q=0,b=0,a;
	scanf("%4d%2d%2d",&a1,&a2,&a3);
	scanf("%4d%2d%2d",&b1,&b2,&b3);
	if ((a1==b1)&&(a2==b2)&&(a3==b3))
	{
		a=a1*10000+a2*100+a3;
		while (a!=0)
		{
			b*=10;
			b+=a%10;
			a/=10;
		}
		if (b==a1*10000+a2*100+a3)
		{
			s+=1;
		}
	}
	else
	{
		while ((a1!=b1)||(a2!=b2)||(a3!=b3))
		{
			a=a1*10000+a2*100+a3;
			b=0;
			if (a3%10==a1/1000)
			{
//				cout<<a1<<a2<<a3<<"\n";
				while (a!=0)
				{
					b*=10;
					b+=a%10;
					a/=10;
				}
				if (b==a1*10000+a2*100+a3)
				{
					s+=1;
//					cout<<a1<<" "<<a2<<" "<<a3<<"\n";
				}
				q=0;
				if (((a1%4==0)&&(a%100!=0))||(a1%400==0))
				{
					q=1;
				}
			}
			if ((a2==12)&&(a3==31))
			{
				a1+=1;
				a2=1;a3=1;
			}
			else
			{
				if ((a2==1)||(a2==3)||(a2==5)||(a2==7)||(a2==8)||(a2==10)||(a2==12))
				{
					if (a3==31)
					{
						a3=1;
						a2+=1;
					}
					else a3+=1;
				}
				else
				{
					if (a2==2)
					{
						if (q==1)
						{
							if (a3==29)
							{
								a3=1;
								a2+=1;
							}
							else a3+=1;
						}
						else
						{
							if (a3==28)
							{
								a3=1;
								a2+=1;
							}
							else a3+=1;
						}
					}
					else if (a3==30)
					{
						a3=1;
						a2+=1;
					}
					else a3+=1;
				}
			}
		}
	}
	cout<<s;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
//最长代码记录
//by Dr_Fun
//:P 
