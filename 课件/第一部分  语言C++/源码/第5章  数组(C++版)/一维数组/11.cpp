#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;



int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int m,ml[10000],t,max=-100001,min=100001;
	cin>>m;
	for(int i=1;i<=m;i++) {
		cin>>t;
		ml[i]=t;
	}
	
	for(int i=1;i<=m;i++){
		if(ml[i]>max) max=ml[i];
		if(ml[i]<min) min=ml[i];
	}
	cout<<max-min;

	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

