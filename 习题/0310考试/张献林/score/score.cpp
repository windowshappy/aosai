#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c;
	cin>>a>>b>>c;
	a*=0.2;
	b*=0.3;
	c*=0.5;
	cout<<a+b+c;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
