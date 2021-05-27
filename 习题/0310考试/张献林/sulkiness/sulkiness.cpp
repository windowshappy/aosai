#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int i,a,b,c,d;
	d=0;
	c=0;
	for(i=1;i<=7;i++)
	  {
	  	cin>>a>>b;
	  	if((a+b)>c&&(a+b)>8)
	  	  {
	  	  	c=a+b;
	  	  	d=i;
	  	  }
	  }
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
