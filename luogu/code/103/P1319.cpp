#include<iostream>
using namespace std;
int main(){
	int n,yl[2000],t=0;
	cin>>n;int yn=1;
	for(;;yn++){
		cin>>yl[yn];
		t+=yl[yn];
		if(t>=n*n) break;
	}
	bool k=false;
	t=1;
	for(int i=1;i<=yn;i++){
		for(int j=1;j<=yl[i];j++){
			if(t>n){
				t=1;
				cout<<endl;
			}
			cout<<k;
			t++;
		}
		k=!k;
	}
}
