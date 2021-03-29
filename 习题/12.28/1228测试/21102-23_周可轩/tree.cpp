#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a1,b1,a2,b2,to,a,b,le,re;
	cin>>l>>a1>>b1>>a2>>b2;
	to=l+1;
	a=b1-a1+1;
	b=b2-a2+1;
	re=to-a-b;
	if(a2>b1){
		cout<<re;
	}
	else{
		le=b1-a2+1;
		cout<<re+le;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
