#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k,q=1,t=0;
	long long sum=0;
	cin>>k;
	for(int i=1;i<=k;i++)
	{
		t++;
		sum+=q;
		if(t==q)
		{
			t=0;
			q+=1;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
