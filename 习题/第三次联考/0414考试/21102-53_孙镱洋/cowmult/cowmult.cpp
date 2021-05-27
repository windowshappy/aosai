#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b,a1;
	int x,y,js=0;
	cin>>a>>b;
	a1=a;
	while(b!=0){
		x=b%10;
		a1=a;
		while(a1!=0){
			y=a1%10;
			js+=x*y;
			a1/=10;
		}
		b/=10;
	}
	cout<<js;
	fclose(stdin);fclose(stdout);
	return 0;
}
//˫while 
