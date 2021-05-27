#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,m=1,s=0,i,q=1;
	cin>>k;
	for(i=1;i<=k;i++)
	{
		s+=m;
		q--;
		if(q==0)
		{
			m+=1;
			q=m;
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
