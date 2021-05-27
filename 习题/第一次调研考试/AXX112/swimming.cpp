#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in,","r",stdin);
	freopen("swimming.out","w",stdout);
	 int a,b,c,d;
	 cin>>a>>b>>c>>d;
	 int x=a*60+b;
	 int y=c*60+d;
	 cout<<(y-x)/60<<" "<<(y-x)%60;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
