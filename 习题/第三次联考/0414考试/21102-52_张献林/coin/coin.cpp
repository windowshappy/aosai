#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,i,j,t,d;
	cin>>k;
	d=1;
	t=j=0;
	while(k>=0)
	  {
	  	if(k>=d)
	  	  {
	  	  	j+=d*d;
	  	  	k-=d;
	  	  	d++;
	  	  }
	  	else
	  	  {
	  	  	j+=k*d;
	  	  	cout<<j;
	  	  	return 0;
	  	  }
	  }
	fclose(stdin);
	fclose(stdout);
	return 0;
}
