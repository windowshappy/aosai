#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,x1,x2,y1,y2;
	cin>>l>>x1>>y1>>x2>>y2;
	if(y1>=x2)
	{
		cout<<l+1-(y1-x1+1)-(y2-x2+1)+(y1-x2+1);
	}
	else cout<<l+1-(y1-x1+1)-(y2-x2+1);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
