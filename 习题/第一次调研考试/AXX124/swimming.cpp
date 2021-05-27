#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d;
	cin>>a>>b>>c>>d;
	int arr=a*60+b;
	int brr=c*60+d;
	int mxn=(brr-arr)%60;
	int mxa=(brr-arr)/60;
	cout<<mxa<<" "<<mxn;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
