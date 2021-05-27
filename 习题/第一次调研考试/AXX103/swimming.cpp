#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,s;
	cin>>a>>b>>c>>d;
	s=(c*60+d)-(a*60+b);
	cout<<s/60<<" "<<s%60;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
