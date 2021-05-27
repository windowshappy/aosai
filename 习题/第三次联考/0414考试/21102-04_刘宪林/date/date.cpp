#include<iostream>
#include<cstdio>

using namespace std;

const int month[13]={0x7f,31,28,31,30,31,30,31,31,30,31,30,31};

int ans;
int a,b,c,d;
int qq=92200229;

int fan(int c)
{
	int s=0;
	int ll=c;
	while(c!=0)
	{
		s=s*10+c%10;
		c=c/10;
	}
	if(ll<1000) s*=100000;
	else s*=10000;
	return s;
}

int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>a>>b;
	for(int i=1;i<=12;++i)
	{
		for(int j=1;j<=month[i];++j)
		{
			c=i*100+j;
			d=fan(c)+c;
			if(d>=a and d<=b)
			{
				ans++;
			}
		}
		
	}
	if(qq>=a&&qq<=b) ans++;
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
