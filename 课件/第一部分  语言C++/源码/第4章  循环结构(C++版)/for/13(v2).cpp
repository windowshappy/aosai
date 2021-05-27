#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int NumList[10000];

int GetNum(int curr,int list[]){
	if(curr<1){
		return 1;
	}
	return list[curr-1]+list[curr-2];
}
void SaveNum(int curr, int num){
	NumList[curr] = num;
}

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);

	int k,temp,ans=0;
	cin>>k;
	ans +=2;
	SaveNum(0,1);
	SaveNum(1,1);
	for(int i=2;i<k;i++){
		SaveNum(i,GetNum(i,NumList));
	}
	cout<<GetNum(k-1,NumList);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

