#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k;
	cin>>k;
	int sum=0,ans=0;
	for(int i=1;i<=k;i++)
	{
		if(i>ans*(ans+1)/2)
		{
			ans++;
		}
		sum+=ans;
	}
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
