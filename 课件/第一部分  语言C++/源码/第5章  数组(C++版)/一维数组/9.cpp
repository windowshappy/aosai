#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int n,Int,x,num_list[10000];

int Find(int num);

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	cin>>n;
	for(int i=1;i<=n;i++) {
		cin>>Int;
		num_list[i] = Int;
	}
	cin>>x;
	cout<<Find(x);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

int Find(int num){
	for(int i=1;i<=n;i++){
		if(num_list[i]==x){
			return i;
		}
	}
	return -1;
}

