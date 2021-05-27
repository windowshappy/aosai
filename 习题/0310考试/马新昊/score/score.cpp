#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c,s;
	cin>>a>>b>>c;
	cout<<a*0.2*1+b*0.3*1+c*0.5*1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
