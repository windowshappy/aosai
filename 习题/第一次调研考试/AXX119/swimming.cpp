#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int zong=c*60+d-(a*60+b);
	int e=zong/60;
	int f=zong%60;
	cout<<e<<" "<<f;
	fclose(stdin);fclose(stdout);
	return 0;
}
