#include<iostream> 
using namespace std;
int main()
{
	int a[1000],n;
	cin>>n;
	int i=1;
	a[0] = n;
	for(;n!=1;i++){
		
		if(n%2==1) n=n*3+1;
		else n/=2;
		a[i] = n;
	}
	for(;i>1;i--){
		cout<<a[i-1]<<" ";
	}
	cout<<a[0];
	return 0;
	
}
 
