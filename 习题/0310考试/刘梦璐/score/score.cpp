#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	sum=0.2*a+0.3*b+0.5*c;
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
