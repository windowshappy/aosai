#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a,b,c,d,s=0,m[10001];
	cin>>l;
	cin>>a>>b>>c>>d;
	for(int i=a;i<=b;i++)	m[i]=1;
	for(int i=c;i<=d;i++)	m[i]=1;
	for(int i=0;i<=l;i++)
	{
		if(m[i]==0)	s++;
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
