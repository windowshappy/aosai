#include<iostream>
using namespace std;
int main()
{
	int n,a,b,c,d;
	double x,y;
	cin>>n>>a>>b;
	x=b/(a*1.0);
	for(int i=2;i<=n;++i)
	{
		cin>>c>>d;
		y=d/(c*1.0);
		if(y-x>0.05)cout<<"better"<<endl;
		else if(x-y>0.05)cout<<"worse"<<endl;
		else cout<<"same"<<endl;
	}
	return 0;
}
