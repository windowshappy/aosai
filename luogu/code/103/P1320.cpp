#include<iostream>
#include<cstring> 
using namespace std;
int main(){
	int n,yl[2000],t=0,sum=0;
	string pic[201];
	cin>>pic[0];
	n=pic[0].size();
	for(int i=1;i<n;i++){
		cin>>pic[i];
	}
	cout<<n<<" ";
	bool k=false;
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(pic[i][j]==(int)k+'0'){
				sum++;
			}
			else{
				cout<<sum<<" ";
				sum=1;
				k=!k;
			}
		}
	}
	cout<<sum;
}
