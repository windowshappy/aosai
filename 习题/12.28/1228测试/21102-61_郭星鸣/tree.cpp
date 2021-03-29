#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int a;
	int x,y;
	int l;
	cin>>l;
	int b,c;
	int d,e;
	cin>>b>>c;
	cin>>d>>e;
	a=l+1;
	x=c-b+1;
	y=e-d+1;
	cout<<a-x-y;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
