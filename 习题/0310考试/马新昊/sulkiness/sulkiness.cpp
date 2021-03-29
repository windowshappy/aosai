#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a,b,s=0,d=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		if(a+b>8&&a+b>s){
			d=i;
			s=a+b;
		}
	}
	cout<<d;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
