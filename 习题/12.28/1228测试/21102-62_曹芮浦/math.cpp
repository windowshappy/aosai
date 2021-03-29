#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int N,sum=1,sum1=0;
	cin>>N;
	for(int i=1;i<=N;i++)
	{
		sum*=i;
		sum1+=sum;
	}
	cout<<sum1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
