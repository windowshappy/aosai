#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	char a[14];
	int s=0,b=1,x;
	for(int i=0;i<13;i++)
	{
		cin>>a[i];
		if(a[i]!='-'&&i<12)
		{
			s+=(a[i]-'0')*b;
			b++;
		}
	}
	x=s%11;
	if(x==a[13]) cout<<"Right";
	else
	{
		a[13]=x+'0';
		for(int i=0;i<12;i++)
			cout<<a[i];
		cout<<a[13];
	}
	return 0;
	fclose(stdin);
	fclose(stdout);
}
