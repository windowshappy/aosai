#include <bits/stdc++.h>

using namespace std;


int measure(int x, int y)
{	
	int z = y;
	while(x%y!=0)
	{
		z = x%y;
		x = y;
		y = z;	
	}
	return z;
}

int main()
{
	char c,t;
	int a,b, a1,b1;
	cin>>a>>t>>b;
	while(cin>>c){
		cin>>a1>>t>>b1;
		if (c=='+')
		{
			a = a*b1+a1*b;
			b = b*b1;
		}
		else
		{
			a = a*b1-a1*b;
			b = b*b1;
		}
		int m = measure(a,b);
		a/=m;b/=m;
	}
	if(b==1) cout<<a;
	else {
		if(b<0)
			cout<<-a<<"/"<<-b;
		else if(b<0 && a<0)
			cout<<-a<<"/"<<-b;
		else
			cout<<a<<"/"<<b;
	}
	return 0;
}