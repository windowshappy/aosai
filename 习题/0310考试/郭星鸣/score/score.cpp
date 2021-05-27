#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c;
	d=a*0.2+b*0.3+c*0.5;
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
