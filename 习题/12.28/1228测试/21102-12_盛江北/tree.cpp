#include<bits/stdc++.h>
using namespace std;
int l,a1,b1,a2,b2,ans;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	cin>>l;
	l++;
	cin>>a1>>b1>>a2>>b2;
	if(b1<=a2)
	{
		ans=l-(b1-a1+1)-(b2-a2+1);
	}
	else
	{
		ans=l-(b2-a1+1);
	}
	
	cout<<ans<<endl;
	
	fclose(stdin);
	fclose(stdout);
	
	return 0;
}
