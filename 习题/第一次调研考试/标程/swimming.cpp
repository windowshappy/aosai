#include<iostream>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout); 
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	e=((c*60+d)-(a*60+b))/60;
	f=((c*60+d)-(a*60+b))%60;
	cout<<e<<" "<<f<<endl;
	return 0;
} 
