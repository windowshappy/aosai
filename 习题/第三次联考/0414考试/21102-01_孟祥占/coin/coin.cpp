#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int k;
	int i,j=1,sum=0;
	int ans=0;
	
	cin>>k;
	for(i=1;j<=k;i++) //ÿ���i�����
	{
		sum+=i; //һֱ������sum��
		for(j;j<=sum&&j<=k;j++) //��ǰΪ��j��
		ans+=i;
	}
	cout<<ans;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
