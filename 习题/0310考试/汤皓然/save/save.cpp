#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int m=0,i,s=0,a,c,d;
	double k;
	for(i=1;i<=12;i++)
	{
		cin>>a;
		m+=300;
		if(a>m)
		{
			cout<<"-"<<i;
			return 0;
		}
		if(m-a>=100)
		{
			c=m-a;
			d=(c/100)*100;
			s+=d;
			m-=d;
		}
		m-=a;
	}
	k=s*1.2;
	k+=m;
	printf("%0.0lf",k);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
