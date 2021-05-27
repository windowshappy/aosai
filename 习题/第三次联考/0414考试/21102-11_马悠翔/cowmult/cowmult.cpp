#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen ("cowmult.in","r",stdin);
	freopen ("cowmult.out","w",stdout);
	
	int a,b,x,y,s=0;
	cin>>a>>b;
	while (a!=0)
	{
		x=a%10;
		y=b;
		while (y!=0)
		{
//			cout<<"s="<<s<<" "<<x<<"*"<<(y%10)<<"\n";
			s+=(y%10)*x;
			y/=10;
		}
		a/=10;
//		cout<<x;
	}
	cout<<s;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
