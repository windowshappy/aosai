#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,a=0,b=0,i=1;
	cin>>k;
	while(k!=0)
	{
		k=k-1;
		a=a+i;
		b=b+1;
		if(b==i)
		{
			i=i+1;
			b=0;
		}
	}
	cout<<a;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
