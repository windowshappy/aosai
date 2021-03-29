#include<bits/stdc++.h>
using namespace std;
int n;
long long ans,base;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	
	cin>>n;
	for(int i=n;i>0;i--)
	{
		base=1;
		for(int j=i;j>0;j--)
		{
			base*=j;
		}
		ans+=base;
	}
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
