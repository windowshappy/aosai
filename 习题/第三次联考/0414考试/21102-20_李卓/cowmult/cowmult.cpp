#include<iostream>
#include<cstdio>
using namespace std;
int a,b,x,y;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	while(a>0){
		x+=a%10;a/=10;
	}
	while(b>0){
		y+=b%10;b/=10;
	}
	cout<<x*y<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
