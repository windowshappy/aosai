#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b,ans=0;
	int y;
	int kd;
	cin>>a>>b;
	for(int i=a/10000;i<=b/10000;i++)
	{
		if(i!=b/10000)y=12;
		else y=b%10000/100;
		for(int j=1;j<=y;j++)
		{
			if(j==2)
			{
				if(i%4==0&&i%100!=0)kd=29;
		        else if(i%400==0)kd=29;
		        else kd=28;
			}
			else if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)kd=31;
			else if(j==4||j==6||j==9||j==11)kd=30;
			for(int k=1;k<=kd;k++)
			{
				int md=j*100+k;
                int mdf=md%10*1000+md%100/10*100+md%1000/100*10+md/1000;
                if(i==mdf)ans++;
			}
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
