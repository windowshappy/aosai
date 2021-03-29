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
	long long int l,t=0,t1=0;
	cin>>l;
	if(l<2) {
		printf("0\n");
		return 0;
	} else if(l==2) {
		printf("2\n1\n");
		return 0;
	}
	for(int i=2;;i++){
		//i%2!=0&&i%3!=0&&i%5!=0&&i%7!=0&&i%11!=0&&i%13!=0&&i%17!=0||i==2||i==3||i==5||i==7||i==11||i==13||i==17
		if(prime(i)) {
			t+=i;
			if(t<=l){
				t1++;
				cout<<i<<" "<<endl;
			}
			else {
				cout<<t1;
				return 0;
			}
		}
	}
	return 0;
} 
