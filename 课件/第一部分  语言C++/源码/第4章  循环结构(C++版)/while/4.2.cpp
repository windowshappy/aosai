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
		if(n==1){
			cout<<"End";
			break;
		}
		if(n%2==0){
			t=n;
			n/=2;
			printf("%d/2=%d", t,n);
		}
		else{
			t=n;
			n=n*3+1;
			printf("%d*3+1=%d", t,n);
		}
		cout<<endl;
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

