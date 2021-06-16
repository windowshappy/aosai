#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

bool prime(int x){
     if(x<2) return 0;
     if(x==2) return 1;
     for(int i=2;i<=sqrt(x);i++)
        if(x%i==0) return 0;
     return 1;
}

int main(){
	int n, t;
	cin>>n;
	for(int i=4;i<=n;i+=2){
		for(int j=2;;j++){
			if(prime(j)){
				if(prime(i-j)){
					t = j;
					break;
				}
			}
		}
		printf("%d=%d+%d\n", i, t, i-t);
	}
}

