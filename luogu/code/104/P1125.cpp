#include<bits/stdc++.h>
using namespace std;

bool prime(int x)
{
     if(x<2) return 0;
     if(x==2) return 1;
     for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
     return 1;
}

int main(){
	string a;
	int maxn=-1,minn=100000;
	cin>>a;
	for(int i=0;i<a.size()-1;i++){
		for(int j=1;j<a.size()-i;j++){
			if((int)a[i]>(int)a[i+j]){
				char temp = a[i];
				a[i] = a[i+j];
				a[i+j] = temp;
			}
		}
		
	}
	char temp=a[0];
	int t=1,zl[30],j=0;
	for(int i=1;i<=a.size()-1;i++){
		if(temp==a[i]){
			t++;
		}
		else{
			zl[j] = t;
			t=1;j++;
		} 
		
		temp = a[i];
	}++j;
	zl[j-1] = t;
	 
	for(int i=0;i<j;i++){
		if(maxn<zl[i]) maxn=zl[i];
		if(minn>zl[i]) minn=zl[i];
	}
	if(prime(maxn-minn)){
		cout<<"Lucky Word"<<endl;
		cout<<maxn-minn;
	}
	else{
		cout<<"No Answer"<<endl;
		cout<<0;
	}
	return 0;
}
