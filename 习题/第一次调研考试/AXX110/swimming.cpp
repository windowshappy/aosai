#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	
	int a,b,c,d,ans1,ans2;
	cin>>a>>b>>c>>d;
	ans1=c-a;
	ans2=d-b;
	if(ans2<0){
		ans2+=60;
		ans1--;
	}
	cout<<ans1<<" "<<ans2;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
