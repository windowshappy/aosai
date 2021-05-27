#include <bits/stdc++.h>

using namespace std;



int main()
{
	double a,n,k,c,f = 0;
	cin>>a>>n>>k;
	c=a/min(n,25.0);
	if(k==1) f = c+a*0.05;
	else if(k==2) f = c+a*0.03;
	else if(k==3) f = c+a*0.01;
	else f = c;
	printf("%.2lf\n", f);
	return 0;
}