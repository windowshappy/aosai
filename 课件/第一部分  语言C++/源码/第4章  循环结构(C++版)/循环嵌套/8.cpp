#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,a,b,max=0,t=1,t1=0;
	cin>>n;
	while(true){
		if(n%t==0) t1=t;
		if(max<t1) max = t1;
		t++;
		if(t>=n) break;
	}
	cout<<max;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

