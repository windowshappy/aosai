#include<bits/stdc++.h>
using namespace std;

bool year(int i){
	if(i%100==0){
		if(i%400==0){
			return true;
		}
	}else{
		if(i%4==0){
			return true;
		}
	}
	return false;
}
int main(){
	int x,y,t=0,yearL[3000];
	cin>>x>>y;
	for(int i=x;i<=y;i++){
		if(year(i)){
			t++;
			yearL[t] = i;
			
		}
	}
	cout<<t<<endl;
	for(int i=1;i<t;i++){
		cout<<yearL[i]<<" ";
	}
	if(t!=0)
	cout<<yearL[t];
	return 0;
} 


