#include<cstdio>
#include<iostream>

using namespace std;

int k,l;
int ans;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	int i=1;
	while(k!=0)
	{
		for(int j=1;j<=i;++j)
		{
			ans+=i;
			k--;
			if(k==0)
			{
				cout<<ans;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
		}
		i++;
		
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
