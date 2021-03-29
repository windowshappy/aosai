#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int L,a,s,sum1=0,sum2=0,sum3=0; 
	cin>>L;
	for(int i=1;i<=2;i++)
	{
		cin>>a>>s;
		sum1=L+1;
		if(s>=a)
		sum2=s-a+1;
		else 
		sum2=a-s+1;
		cout<<sum1-sum2+1; 
	}
	fclose(stdin);
	fclose(stdout);
	return 0;}  
