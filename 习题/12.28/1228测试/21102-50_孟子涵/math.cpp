#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin); 
	freopen("math.out","w",stdout); 
	int n,s=0,t=1;
	cin>>n;
	for(int i=1;i<=n;i++){
		t=1;
		for(int j=1;j<=i;j++){
			t*=j;
		}
		s+=t;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
