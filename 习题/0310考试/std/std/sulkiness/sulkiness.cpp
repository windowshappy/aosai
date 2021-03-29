#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,day=0,max=0,s;
	for (int i=1;i<=7;i++)
	  {
	  	scanf("%d%d",&a,&b);
	  	s=a+b;
	  	if (s>max&&s>8)
	  	  max=s,
	  	  day=i;
	  }
	cout<<day<<endl;
	return 0;
}
