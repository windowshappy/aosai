#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 	freopen("coin.in","r",stdin);
    freopen("coin.out","w",stdout);
	int k,s=0,m=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{	
		for(int j=1;j<=i;j++)
		{
			s+=i;
			m++;
			if(m==k)
			{
				cout<<s;
			}	
		}
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
