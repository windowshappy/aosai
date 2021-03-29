#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	long long sum=1,max=0;
	int n;
	cin>>n;
	for(int j=1;j<=n;j++){
		for(int i=1;i<=j;i++){
		sum=sum*i;
		}
			max=max+sum;
			sum=1;
	}
	
	cout<<max;
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
