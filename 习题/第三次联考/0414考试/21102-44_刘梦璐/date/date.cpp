#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b,sum=0,ans=0;
	cin>>a>>b;
	for(int i=a/10000;i<=b/10000;i++)
	{
		if(i%100==0)
		{
			if(i%400==0)
				sum+=366;
			else
				sum+=365;
		}
		else if(i%4==0)
			sum+=366;
		else 
			sum+=365;
	}
	for(int j=(a-a/10000*10000)/100;j<=(a-a/10000*10000)/100;j++)
	{
		if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
			sum+=31;
		else if(j==2)
		{
			if((a/10000)%100==0)
			{
				if((a/10000)%400==0)
					sum+=29;
				else
					sum+=28;
			}
			else if((a/10000)%4==0)
				sum+=29;
			else
				sum+=28;
		}
		else
			sum+=30;
	}
	for(int l=a%100;l<=b%100;l++)
	{
		sum+=b/100-a%100;
	}
	for(int i=a;i<=sum+b;i++)
	{
		for(int j=1;j<=8;j++)
		{
			if(a/i!=a/(8-i+1))
				break;
		}
		ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
