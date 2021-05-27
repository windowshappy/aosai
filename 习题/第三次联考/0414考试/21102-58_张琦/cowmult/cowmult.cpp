#include<iostream>
#include<cstdio>
using namespace std;
int a,b,i=0,j=0,k,o,sum=0,c[10],d[10];
int main()
{
	fropen("cowmult.in","r",stdin);
	fropen("cowmult.out","w",stdout);
	
	cin>>a>>b;
	while(a)
	  {
	  	c[i++]=a%10;a/=10;
	  }
	while(b)
	  {
	  	d[j++]=b%10;b/=10;
	  }
	for(k=0;k<=i;++k)for(o=0;o<=j;++o)
	  sum+=c[k]*d[o];
	cout<<sum;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
