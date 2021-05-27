#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a,b,c,d;
	cin>>l>>a>>b>>c>>d;
	int h=l+1;
	if(b<c)
	{
		cout<<h-(b-a+1)-(d-c+1);
	}
	if(b>=c)
	{
		if(b>d)
		{
			cout<<h-(b-a+1);
		}
		if(b<=d)
		{
			cout<<h-(d-a+1);
		}
	} 
	fclose(stdin);
	fclose(stdout);
	return 0;
}
