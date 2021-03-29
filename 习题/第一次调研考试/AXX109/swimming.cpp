#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int t1,t2,t11,t22,time;
	cin>>t1>>t2>>t11>>t22;
	time=t11*60+t22-t1*60-t2;
	cout<<time/60<<" "<<time%60;
	fclose(stdin); fclose(stdout);
	return 0;
}
