#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	double n,a,b,c,d,e,f,arr=0,brr=0,crr=0;
	cin>>n>>a>>b>>c>>d>>e>>f;
	arr=ceil(n/a)*b;
	brr=ceil(n/c)*d;
	crr=ceil(n/e)*f;
	if(arr<brr&&arr<crr)cout<<arr;
	else if(brr<arr&&brr<crr)cout<<brr;
	else if(crr<arr&&crr<brr)cout<<crr;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
