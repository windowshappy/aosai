#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	string x,y;
	cin>>x>>y;
	int sum=0;
	int m=x.size();
	int n=y.size();
	for(int i=0;i<m;i++)
	{
		for(int j=0;j<n;j++)
		{
			sum+=(x[i]-'0')*(y[j]-'0');
		}
	}
	cout<<sum<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
