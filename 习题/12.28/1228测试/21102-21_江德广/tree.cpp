#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int L;
	cin>>L;
	int a1,a2,b1,b2;
	cin>>a1>>a2>>b1>>b2;
	int z;
	if(a1>a2)
	{
		z=a1;a1=a2;a2=z;
	}
	if(b1>b2)
	{
		z=b1;b1=b2;b2=z;
	}
	int a=a2-a1+1;
	int b,num=0;
	if(b1<a1)
	{
		if(b2<a1)
		{
			b=b2-b1+1;
			num+=b;
		}
		if(b2>=a1&&b2<=a2)
		{
			b=a1-b1;
			num+=b;
		}
		if(b2>a2)
		{
			b=b2-a2;
			num+=b;
			b=a1-b1;
			num+=b;
		}
	}
	if(b1>=a1&&b1<=a2)
	{
		if(b2>a2)
		{
			b=b2-a2;
			num+=b;
		}
	}
	if(b1>a2)
	{
		b=b2-b1+1;
		num+=b;
	}
	cout<<L+1-a-num;
	fclose(stdin);fclose(stdout);
	return 0;
}
