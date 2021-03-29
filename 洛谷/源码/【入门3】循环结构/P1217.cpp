#include<bits/stdc++.h>
using namespace std;
const int MAX = 100000011;
bool prime(int x)
{
     if(x<2) return 0;
     if(x==2) return 1;
     for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
     return 1;
}
int primeL[MAX];

bool hw(int x){
	int w = x;
	int n=0;
	while(w!=0){
		n = n*10+w%10;
		w/=10;
	}
	return n==x;
}
int main(){
	int a,b;
	cin>>a>>b;
	if(b>9999999) b=9999999;
	bool f=true;
	if(a%2==0) a++;
	for(int i=a;i<=b;i+=2){
		if(hw(i)){
			if(prime(i)){
				if(f){
					cout<<i;
					f=0;
				}else{
					cout<<endl<<i;
				}
				
			}
		
		}
		
	}
	return 0;
}
