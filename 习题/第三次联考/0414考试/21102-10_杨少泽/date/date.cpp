#include<iostream>
#include<cstdio>

using namespace std;

int n,m;
int ans;
int a[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};

int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	
	cin>>n>>m;
	
	for(int i=0;i<=9;i++)
	{
		for(int j=0;j<=9;j++)
		{
			for(int z=0;z<=9;z++)
			{
				for(int x=0;x<=9;x++)
				{
					int d=i+j*10;
					int mon=z+x*10;
					int l1=i+j*10+z*100+x*1000;
					int l2=x*10000+z*100000+j*1000000+i*10000000;
					int l3=l1+l2;
					
					if(l3<n||l3>m)
					{
						continue;
					}
					
					if(mon<1||mon>12)
					{
						continue;
					}
					
					if((l2%4==0&&l2%100!=0)||(l2%400==0))
					{
						a[2]=29;
					}
					
					if(a[mon]>=d&&d>=1)
					{
						ans++;
						
						//cout<<l3<<endl;
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
