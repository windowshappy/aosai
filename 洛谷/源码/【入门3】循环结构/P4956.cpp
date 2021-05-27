#include<bits/stdc++.h>
using namespace std;

int x=100,k=1,n,a=0;
//x x+k x+2k x+3k x+4k x+5k x+6k 7x+21k 
int main(){
	cin>>n;
	for (k = 1;;k++)
    {
    	for (x = 100; x > 0; x--){
    		if ((7 * x + 21 * k) * 52 == n)
            {
                printf("%d\n%d", x, k);
                return 0;
            }
    	}
            
    }
	return 0;
}
