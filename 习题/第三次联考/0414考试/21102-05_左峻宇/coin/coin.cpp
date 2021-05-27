#include<iostream>
#include<cstdio>
using namespace std;

int k,d;
long long ans;

int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	
	cin>>k;
	
	for(int i=1;;i++){
		
		for(int j=1;j<=i;j++){
			d++;
			ans+=i;
			if(d==k){
				
				cout<<ans;
				fclose(stdin);
				fclose(stdout);
				return 0;
			}
			
		}	
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
