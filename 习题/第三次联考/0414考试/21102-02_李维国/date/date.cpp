#include<iostream>
#include<cstdio>
using namespace std;
int hws(int);
int hws(int n)
{
	long long j,ans=0;
	j=n;
	while(j!=0)
	{
		ans=ans*10+j%10;
		j/=10;
	}
	if(ans==n)
	{
		return true;
	}
	else
	{
		return false;
	}
}
long long a,b,a1,b1,a2,a3;
int ans,rq,s[5],z;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>a>>b;
	if(a==b)
	{
		if(hws(a)==1)
		{
			cout<<1;
			fclose(stdin);
	        fclose(stdout);
			return 0;
		}
		else
		{
			cout<<0;
			fclose(stdin);
	        fclose(stdout);
			return 0;
		}
	}
	else
	{
		a1=a/10000;
		b1=b/10000;
		for(int i=a1;i<=b1;i++)
		{
			int f=1,j=i;
        	while(j!=0)
        	{
        		s[f]=j%10;
        		j/=10;
        		f++;
	        }
	        z=s[1]*1000+s[2]*100+s[3]*10+s[4];
	        rq=i*10000+z;
	        if(rq>b)
	        {
	        	break;
	        }
			if((i%4==0&&i%100!=0)||i%400==0)
			{
				a2=rq/100%100;
				if(a2==1||a2==3||a2==5||a2==7||a2==8||a2==10||a2==12)
				{
					a3=rq%100;
					if(a3>=1&&a3<=31)
					{
						ans++;
					}
				}
				else
				{
					if(a2==4||a2==6||a2==9||a2==11)
					{
						a3=rq%100;
						if(a3>=1&&a3<=30)
						{
							ans++;
						}
					}
					else
					{
						if(a2==2)
						{
							a3=rq%100;
							if(a3>=1&&a3<=29)
							{
								ans++;
							}
						}
					}
				}
			}
			else
			{
				a2=rq/100%100;
				if(a2==1||a2==3||a2==5||a2==7||a2==8||a2==10||a2==12)
				{
					a3=rq%100;
					if(a3>=1&&a3<=31)
					{
						ans++;
					}
				}
				else
				{
					if(a2==4||a2==6||a2==9||a2==11)
					{
						a3=rq%100;
						if(a3>=1&&a3<=30)
						{
							ans++;
						}
					}
					else
					{
						if(a2==2)
						{
							a3=rq%100;
							if(a3>=1&&a3<=28)
							{
								ans++;
							}
						}
					}
				}
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
