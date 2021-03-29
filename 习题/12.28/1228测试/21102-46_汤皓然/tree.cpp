#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a1,a2,b1,b2,s1,s2,x,sum,s;
	cin>>l>>a1>>a2>>b1>>b2;
	if(a2>=b1)
	{
		if(a2<=b2)
		{
			x=b2-a1+1;
		}
		else
		{
			x=a2-a1+1;
		}
	}
	else
	{
		s1=a2-a1+1;
		s2=b2-b1+1;
		x=s1+s2;
	}
	sum=l+1-x;
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
