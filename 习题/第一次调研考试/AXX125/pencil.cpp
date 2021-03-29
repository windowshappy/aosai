#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	
	int n;
	int a,b,min=999999999;
	cin>>n;
	for(int i=0;i<3;i++)
	{
		cin>>a>>b;
		int ans=ceil(n*1.0/a);
		ans*=b;
		if(ans<=min)
		{
			min=ans;
		}
	}
	cout<<min<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
