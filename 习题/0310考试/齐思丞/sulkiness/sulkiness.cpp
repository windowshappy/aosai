#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,c,ans=8,z=0;
	for(int i=1;i<=7;i++)
	{
		cin>>a>>b;
		c=a+b;
		if(c>ans)
		{
			ans=c;
			z=i;
		}	
	}
	cout<<z<<endl;
    fclose(stdin);
	fclose(stdout);
	return 0;
}
