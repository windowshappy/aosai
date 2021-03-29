#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	
	int n,a;
	bool f=false;
	cin>>n;
	if(n<0){
		cout<<"-";n=-n;
	}
	while(n!=0){
		a=n%10;
		n/=10;
		if(a!=0){
			cout<<a;
			f=true;
		}
		else if(f==true) cout<<a;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
