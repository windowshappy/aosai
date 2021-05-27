#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	long long a,b,c,d,t;
	cin>>a>>b>>c>>d;
	t=c*60+d-a*60-b;
	cout<<t/60<<" "<<t%60;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
