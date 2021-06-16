#include<iostream> 
using namespace std;
int main()
{
	int n[101],a,i=0;
	while(true){
		cin>>a;
		if(a==0) break;
		n[i] = a;
		i++;
	}
	i--;
	for(;i>0;i--){
		cout<<n[i]<<" ";
	}
	cout<<n[0];
	return 0;
	
}
 
