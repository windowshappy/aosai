#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	
	int a;
	cin>>a;
	if(a<=150)
		printf("%0.1lf",0.4463*a);
	else if(151<=a<=400)
		printf("%0.1lf",0.4663*a-3);
	else if(a>=401)
		printf("%0.1lf",0.5663*a-43);
	return 0;
}
