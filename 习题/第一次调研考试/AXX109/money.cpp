#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("money.in","r",stdin);
	freopen("money.out","w",stdout);
	int n;
	cin>>n;
	if(n<=150) printf("%.1lf",(double)n*0.4463);
	else if(n>150&&n<=400) 
	printf("%.1lf",(double)150*0.4463+(n-150)*0.4663);
	else
	printf("%.1lf",(double)150*0.4463+250*0.4663+(n-400)*0.5663);
	fclose(stdin); fclose(stdout);
	return 0;
}
