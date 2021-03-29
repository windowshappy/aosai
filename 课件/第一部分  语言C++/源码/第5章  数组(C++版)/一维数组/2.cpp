#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int appleList[10];
	int maxHigh,a,b=0,c;
	for(int i=0;i<10;i++){
		cin>>a;
		appleList[i] = a;
	}
	cin>>maxHigh;
	for(int j=0;j<10;j++){
		if(appleList[j]<=maxHigh){
			b++;
		}
		else if(appleList[j]<=maxHigh+30){
			b++;
		}
	}
	cout<<b;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

