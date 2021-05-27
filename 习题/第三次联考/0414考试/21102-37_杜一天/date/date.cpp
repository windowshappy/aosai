#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int m,n;
	cin>>m>>n;
	int sum=0;
	int ans=0;
	for(int i=m;i<=n;i++)
	{
		int w=i/10000;
		if((w%4==0)&&(w%400==0)&&(w%100!=0))
		{
		int x=(i%10000)/100;
		if(x<=12&&x>=1)
		{
		if(x==1||x==5||x==3||x==7||x==8||x==10||x==12)
		{
			int y=i%100;
			if(y>=1&&y<=31)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
			}
		}
		if(x==4||x==6||x==9||x==11)
		{
			int y=i%100;
			if(y>=1&&y<=30)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
			}
		}
		if(x==2)
		{
			int y=i%100;
			if(y>=1&&y<=29)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
			}
		}
	    }
	}
	else
	{
		int x=(i%10000)/100;
		if(x<=12&&x>=1)
		{
		if(x==1||x==5||x==3||x==7||x==8||x==10||x==12)
		{
			int y=i%100;
			if(y>=1&&y<=31)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
			}
		}
		if(x==4||x==6||x==9||x==11)
		{
			int y=i%100;
			if(y>=1&&y<=30)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
			}
		}
		if(x==2)
		{
			int y=i%100;
			if(y>=1&&y<=28)
			{
				int s=i;
				while(s!=0)
				{
					sum=sum*10+s%10;
					s/=10;
				}
				if(sum==i)
				{
					ans++;
				}
				sum=0;
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
