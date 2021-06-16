#include<iostream> 
using namespace std;
int main()
{
	int f[101],n,t;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		f[i] = t;
	}
	t=0;
	bool first=1;
	for(int i=0;i<n;i++){
		for(int j=0;j<i;j++){
			if(f[i]>f[j]) t++;
		}
		if(first){
			cout<<t;
			first = 0;
		} 
		else cout<<" "<<t;
		t=0;
	}
	return 0;
	
}
 
