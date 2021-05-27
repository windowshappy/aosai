#include<iostream>
#include<cstdio>
using namespace std;
int k,sum=0,i,j=1,a=0;
int main()
{
	fropen("coin.in","r",stdin);
	fropen("coin.out","w",stdout);
	
	cin>>k;
	for(i=1;i<=k;++i)
	{
		sum+=j;a++;
		if(j==a)
		  {
		  	j++;a=0;
		  }
	}
	cout<<sum;
	
	fclose(stdin);fclose(stdout);
	return 0;
}
