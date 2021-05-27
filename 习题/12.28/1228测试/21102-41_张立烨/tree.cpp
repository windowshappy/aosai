#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int n,l,a,b,e,f,x1,y1,c=0;
	cin>>l;
	cin>>a>>b;
	cin>>e>>f;
	x1=(b-a)/1;
	y1=(f-e)/1;
	c=l/1-x1-y1;
	if(a==f||b==e){
		c=l/1-x1-y1+2;
	}
	cout<<c;
	fclose(stdin); fclose(stdout);
	return 0;
}
