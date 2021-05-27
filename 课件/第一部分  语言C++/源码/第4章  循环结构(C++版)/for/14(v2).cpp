#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>
#include<string.h>

using namespace std;

string list[25];

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n;
	double j1,j2,o1,o2,x,y;
	cin>>n;
	cin>>j1>>j2;
	x = j2/j1*100.0;
	for(int i=1;i<n;i++){
		cin>>o1>>o2;
		y=o2/o1*100.0;
		if(y-x>=5){
			list[i] = "better";
		}
		else if(x-y>=5){
			list[i] = "worse";
		}
		else{
			list[i] = "same";
		}
	}
	for(int j=1;j<n;j++){
		cout<<list[j]<<endl;
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
