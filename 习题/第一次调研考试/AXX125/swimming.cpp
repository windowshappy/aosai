#include<bits/stdc++.h>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
	if(d>b)
	{
		f=d-b;
	}
	else
	{
		c--;
		d+=60;
		f=d-b;
	}
	
	e=c-a;
	
	cout<<e<<' '<<f<<endl;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
