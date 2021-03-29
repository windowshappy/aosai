#include<iostream>
#include<cstdio>

using namespace std;

int main(){
//	freopen("14.in", "r", stdin);
//	freopen("14.out", "w", stdout);
	
	int Fmax=-10,l[10000],t,n;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(Fmax<t) Fmax=t;
		l[i] = t;
	}
	t=0;
	for(int i=0;i<=Fmax;i++){
		for(int j=0;j<n;j++){
			if(l[j]==i){
				t++;	
			}
		}
		cout<<t<<endl;
		t=0;
	}
	
	return 0;
}

