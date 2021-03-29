#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int x,y;
	int z;
	for(int i=1;i<=12;i++)
	{
		cin>>z;
		x=x+300;
		x=x-z;
		if(x<0)
		{
			cout<<-i;
			return 0;
		}
		y+=x/100;
		x=x%100;
	}
	cout<<1.2*y+x;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
