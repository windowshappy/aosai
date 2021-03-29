#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,reh,rem,re1,re2;cin>>a>>b>>c>>d;
	re1=a*60+b;
	re2=c*60+d;
	reh=(re2-re1)/60;
	rem=(re2-re1)%60;
	cout<<reh<<" "<<rem;
	fclose(stdin);fclose(stdout);
	return 0;
}
