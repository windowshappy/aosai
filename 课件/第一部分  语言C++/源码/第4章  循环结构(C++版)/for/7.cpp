#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	int n,m,s=0;
	cin>>n>>m;
	for(int i=n;i<=m;i++)
	{
	
		if(i%2!=0)
	    s=s+i;
	}
	cout<<s;
	return 0;
} 
