#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,t;
	cin>>n;
	while(true){
		if(n<10){
			t = n%10;
			cout<<t;
			break;
		}
		t = n%10;
		n/=10;
		cout<<t<<" ";
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

