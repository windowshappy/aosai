#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,j=0,y=0,t=0,a,b,c;
	cin>>n;
	for(int i=1;i<=n;++i)
	{
		cin>>a>>b>>c;
		j=j+a;
		y+=b;
		t+=c;
	}
	cout<<j<<" "<<y<<" "<<t<<" "<<j+y+t;
	return 0;
} 
