#include<iostream>
#include<string.h>
using namespace std;
int main(){
	int n,t;
	double a;
	bool light[2000001];
	memset(light, 0, sizeof(light));
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>t;
		for(int j=1; j<=t; j++){
			int temp = a*j;
			light[temp] = !light[temp];
		}
	}
	for(int i=0;i<=2000000;i++){
		if(light[i]) {
			cout<<i;
			break;
		}
	}
}
