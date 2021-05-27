#include<cstdio>
#include<iostream>
using namespace std;
int dx[13]={0,31,29,31,30,31,30,31,31,30,31,30,31};
int a,b,ans,sum,tot;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	scanf("%d%d",&a,&b);
	int x=a/10000,y=b/10000,c=a%10000,d=b%10000;
	for(int i=1;i<=12;i++)
	{
		for(int j=1;j<=dx[i];j++)
		{
			tot=i*100+j;
			ans=(j%10)*1000+(j/10)*100+(i%10)*10+i/10;
			if(ans>=x&&ans<=y)
			{
				if(ans==x&&tot<c)
				{
					continue;
				}
				if(ans==y&&tot>d)
				{
					continue;
				}
				sum++;
			}		
		}
	}
	printf("%d",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
