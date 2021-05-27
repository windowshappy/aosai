#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int s,l,x1,y1,x2,y2,s1,s2;
	cin>>l>>x1>>y1>>x2>>y2;
	l=l+1;
	s1=y1-x1+1;
	s2=y2-x2+1;

	if(x1>x2&&y1<y2)
	{
		s=l-s2;
	}
	if(x1<x2&&y2>y1)
	{
		s=l-s1;
	}
	if(x1>x2&&y1>y2)
	{
		s=l-s1-s2+(y2-x1+1);	
	}
	if(x1==x2&&y1==y2)
	{
		s=l-s1;
	}
	if(x1<x2&&y1<y2)
	{
		s=l-s1-s2+(y1-x2+1);
	}
	if((x1<x2&&y1<y2)||(x2<x1&&y2<y1))
	{
		s=l-s1-s2;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
	
}
