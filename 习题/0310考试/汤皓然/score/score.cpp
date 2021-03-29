#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c,s;
	double a1,b1,c1;
	cin>>a>>b>>c;
	a1=a*0.2;
	b1=b*0.3;
	c1=c*0.5;
	s=a1+b1+c1;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
