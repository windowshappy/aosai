#include<iostream>
#include<cstdio>
using namespace std;
int a,b,c[25]={0,31,29,31,30,31,30,31,31,30,31,30,31},d,e;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>a>>b;
	for (int i=1;i<=12;i++)
	{
		for (int j=1;j<=c[i];j++)
		{
			d=(j%10*10+j/10)*1000000+(i%10*10+i/10)*10000+i*100+j;
			if (d>=a && d<=b)
			e++;
		}
	}
	cout<<e;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
