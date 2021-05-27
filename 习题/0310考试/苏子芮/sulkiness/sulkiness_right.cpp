#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("sulkiness_right.in", "r", stdin);
	freopen("sulkiness_right.out", "w", stdout);
	int a,b,t, max = 0, tt=0;
	for(int i=1;i<=7;i++){
		cin>>a>>b;
		t=a+b;
		if(t>8&&max<t){
			tt = t;
			max = t;
		}
	}
	cout<<tt;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
