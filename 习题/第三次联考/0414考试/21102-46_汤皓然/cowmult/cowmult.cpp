#include<iostream>
#include<cstdio>
using namespace std;
int x[16],y[16];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	long long a,b,s=0;
	int q=1,w=1,i,z;
	scanf("%lld",&a);
	scanf("%lld",&b);
	while(a!=0)
	{
		x[q]=a%10;
		a/=10;
		q++;
	}
	while(b!=0)
	{
		y[w]=b%10;
		b/=10;
		w++;
	}
	q-=1;
	w-=1;
	for(i=1;i<=q;i++)
	{
		for(z=1;z<=w;z++)
		{
			s+=x[i]*y[z];
		}
	}
	printf("%lld",s);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
