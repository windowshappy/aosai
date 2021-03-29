#include<bits/stdc++.h>
using namespace std;
int x,n;
int a;
long long base,ans=1;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	
	cin>>x>>n;
	x++;
	base=x;
	a=n;
	while(a>0)
	{
		if(a&1)
		{
			ans*=base;
		}
		base*=base;
		a>>=1;
	}
	
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
