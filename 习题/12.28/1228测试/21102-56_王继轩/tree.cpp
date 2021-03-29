#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l;
	cin>>l;
	int a1,a2,a3,a4;
	cin>>a1>>a2>>a3>>a4;
	int b,c,d,e;
	b=l+1;
	if(a1<a2<a3<a4) {
		c=a2-a1+1; d=a4-a3+1; e=b-c-d;}
	if(a3<a2) {
	c=a4-a1+1; e=b-c;}

	if(a1<a3&&a4<a2){c=a2-a1+1;e=b-c;
	}

cout<<e;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
