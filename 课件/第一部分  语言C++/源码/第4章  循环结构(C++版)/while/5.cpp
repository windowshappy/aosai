#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,t,a;
	cin>>n;
	t=n;
	if(n<0) cout<<"-";
	
	while(true){
		if((int)abs(n)<10){
			t = n%10;
			break;
		}
		t = n%10;
		n/=10;
		if(t!=0) cout<<(int) abs(t);
	}
	cout<<(int) abs(t);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

