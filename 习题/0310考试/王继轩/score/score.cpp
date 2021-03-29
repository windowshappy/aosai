#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.cot","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	int sum=0;
	a=a/5; b=(b/10)*3; c=c/2;
	sum=a+b+c;
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
