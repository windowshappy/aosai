#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	long long a,b,c=0,n,x1=10000000,x2=10,i,e;
	cin>>a>>b;
	int x[5],y[5],d=0,a1,a2,a3;
	for(i=a;i<=b;i++)
	{
		n=i;
		for(int j=1;j<=4;j++)
		{
			while(x1>=10000)
			{
				x[j]=n/x1;
				x[j]=x[j]%10;
				x1=x1/10;
			}
			while(x2<=10000)
			{
				y[j]=n%x2;
				y[j]=y[j]/10;
				x2=x2*10;
			}
		}
	}
	for(i=a;i<=b;i++)
	{
		for(int j=1;j<=4;j++)
		{
			if(x[j]==y[j]) d++;
		}
		if(d==4)
		{
			e=i;
			a1=e/100%100;
			a2=e%100;
			a3=e/10000;
			if((a1==1||a1==3||a1==5||a1==7||a1==8||a1==10||a1==12)
				&&a2<=31) 
			c++;
			if((a1==4||a1==6||a1==9||a1==11)
				&&a2<=30) 
			c++;
			if(a1==2)
			{
				if(((a3%4==0&&a%100!=0)||a%400==0)&&a2<=29) c++;
				else if(a2<=28) c++;
			}	
		} 
	}
	cout<<c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
