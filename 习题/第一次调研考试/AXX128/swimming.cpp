#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	freopen("swimming.in", "r", stdin);	
	freopen("swimming.out", "w", stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	int t = c*60+d-a*60-b;
	f = t%60;
	e = (t-f)/60;
	cout<<e<<" "<<f;
	fclose(stdin);	
	fclose(stdout);
	return 0;	
	
}
