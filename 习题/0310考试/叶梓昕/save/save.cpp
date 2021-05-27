#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int a,b=0,c=0;
	for(int i=1;i<=12;i++)
	{
		cin>>a;
		b=b+300-a;
		if(b<0)
		{
			cout<<-i;
			return 0;
		}
		else
		{
			c+=b/100;
			b=b%100;
		}
	}
	cout<<b+c*120;
	fclose(stdin);
	fclose(stdout);
}
