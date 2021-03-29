#include<iostream>
#include<cstdio>
using namespace std;
double a,b,c,ans;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	
	cin>>a>>b>>c;
	ans=a*0.2+b*0.3+c*0.5;
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
