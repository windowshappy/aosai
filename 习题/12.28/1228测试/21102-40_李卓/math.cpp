#include<iostream>
#include<cstdio>
using namespace std;
int a[1002];bool c;
long long n;
int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	cin>>n;a[1]=1;
	long long num=1,sum=0;
	for(int i=1;i<=n;++i){
		sum+=num*i;num*=i;
	}
	cout<<sum<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
