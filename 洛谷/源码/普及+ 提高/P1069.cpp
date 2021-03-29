#include<bits/stdc++.h>

using namespace std;

int n,m1,m2,fl[10011], timer[10011] = {},t=1;
int main(){
	cin>>n>>m1>>m2;
	for(int i=0;i<n;i++){
		cin>>fl[i];
	}
	if(m1==1){
		cout<<0;
		return 0;
	}
	for(int i=0;i<n;i++){
		for(int j=1;;j++){
			if(fl[i]%2!=0){
				break;
			}
			t*=fl[i];
			if(t<m1) continue;
			double t1 = t;
			for(int x=0;x<m2;x++){
				t1/=m1;
				if(t1<1||(t1-(int)t1)!=0){
					break;
				}
			}
			if(t1>=1&&(t1-(int)t1)==0){
				timer[i] = j+1;
				break;
			}
		}
	}
	sort(timer, timer+n);
	if(timer[0] == 0){
		cout<<-1;
	}
	else{
		cout<<timer[0];
	}
}
