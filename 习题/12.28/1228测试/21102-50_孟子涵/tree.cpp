#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin); 
	freopen("tree.out","w",stdout); 
	int n,a,x,b,y,t;
	cin>>n>>a>>b>>x>>y;
	n+=1;
	if(x<=b){
		if(y>=b)
		t=y-a+1;
		if(y<b)
		t=b-a+1;
		n-=t;
	}
	else if(x>b){
		t=b-a+1+y-x+1;
		n-=t;
	}
	cout<<n;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
