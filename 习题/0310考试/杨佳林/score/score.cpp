#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	double a,b,c;
	cin>>a>>b>>c;
	printf("%.0lf",a*20/100+b*30/100+c*50/100);
	
	fclose(stdin);fclose(stdout);
	return 0;
}
