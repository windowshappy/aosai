#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int list[5][5],temp,m,n,t[1][5],t1[1][5];
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cin>>temp;
			list[x][y] = temp;
		} 
	}
	cin>>m>>n;
	
	for(int i=0;i<5;i++){
		t[0][i] = list[m-1][i];
	}
	
	for(int i=0;i<5;i++){
		t1[0][i] = list[n-1][i];
	}
	
	for(int i=0;i<5;i++){
		list[m-1][i] = t1[0][i]; 
	}
	
	for(int i=0;i<5;i++){
		list[n-1][i]=t[0][i];
	}
	
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			cout<< list[x][y] <<" ";
		} 
		cout<<endl;
	}
	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

