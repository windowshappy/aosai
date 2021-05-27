#include<iostream>
#include<cstdio>
using namespace std;

char a[10],b[10];

int main()
{
	freopen("date.in","w",stdin);
	freopen("date.out","r",stdout);
	for(int i=1; i<=8; i++)
	{
		cin>>a[i];
	}
	for(int i=1; i<=8; i++)
	{
		cin>>b[i];
	}
	int ans=0;
	for(int i=8; i>4; i--)
	{
		if(a[i]==a[9-i])
		{
			ans++;
		}
	}
	if(ans==4)
	cout<<1;
	else
	cout<<0;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
