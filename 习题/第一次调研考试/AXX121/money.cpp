#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int n;cin>>n;
	double re;
	if(n<=150) re=n*0.4463;
	else if(n>=151&&n<=400) re=66.945+(n-150)*0.4663;
	else if(n>=401) re=183.52+0.5663*(n-400);
	printf("%.1lf",re);
	fclose(stdin);fclose(stdout);
	return 0;
}
