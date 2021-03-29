#include<iostream>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c,s;
	cin>>a>>b>>c;
	s=a*0.2+b*0.3+c*0.5;
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
