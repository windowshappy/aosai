#include<iostream>
#include<cmath>
#include<cstdio>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int light[5000],t=0,t1=0;
	int p[5000];
	int n,m;
	cin>>n>>m;
	m--;
	for(int i=0;i<n;i++) light[i] = 0;
	for(int j=2;j<=m;j++){
		for(int i=0;i<n;i+=j){
			light[i] = light[i]==0? 1:0;
		}
	}
	for(int i=0;i<n;i++){
		if(light[i]==0&&i!=0){
			
			if(i+t1+1<n)
			cout<<i<<",";
			else cout<<i;
			t1 = i-t;
		}
		t=i;
	}
	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

