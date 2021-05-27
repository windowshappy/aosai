#include<bits/stdc++.h>

using namespace std;

int main(){
	int s,x,y,z;
	cin>>s>>x;
	y = s-x;
	z = s+x;
	int w = 0;int i=0;double speed=7;
	for(;;i++){
		
		if(w>z){
			cout<<'n';
			return 0;
		}
		if(w>=y&&w<=z){
			if(w+speed>z){
				cout<<'n';
				return 0;
			}
			else{
				cout<<'y'; 
				return 0;
			}
		}
		w+=speed;
		speed*=0.98;
		
	}

} 
