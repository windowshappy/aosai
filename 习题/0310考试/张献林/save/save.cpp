#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,c,d,i;
	b=0;
	c=0;
	d=0;
	for(i=1;i<=12;i++)
	  {
	  	cin>>a;
	  	b=300-a+b;
	  	if(b<0)
	  	  {
	  	  	cout<<"-"<<i;
	  	  	i=0;
	  	  	break;
	  	  }
	  	c+=b/100*100;
	  	b=b%100;
	  }
	double n;
	n=c;
	if(i!=0)
	  {
	  	cout<<n*1.2+b;
	  }
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
