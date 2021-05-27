#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c;
	cin>>a>>b>>c;
	cout<<0.2*a+0.3*b+0.5*c;
	fclose(stdin);fclose(stdout);
	return 0;
}
