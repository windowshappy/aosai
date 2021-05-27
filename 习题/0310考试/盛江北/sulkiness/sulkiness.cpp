#include<bits/stdc++.h>
using namespace std;
int a,b,ma,day;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		if(a+b>8)
		{
			if(a+b-8>ma)
			{
				ma=a+b-8;
				day=i;
			}
		}
	}
	cout<<day<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
