#include<iostream>
#include<cstdio>
using namespace std;
int n,a[10050],b[10050],x[10050],y[10050],c,d,e;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for (int i=1;i<=n;i++)
	cin>>a[i]>>b[i]>>x[i]>>y[i];
	cin>>c>>d;
	for (int i=n;i>=1;i--)
	{
		if (a[i]<=c && a[i]+x[i]>=c && b[i]<=d && b[i]+y[i]>=d)
		{
			e=i;
			break;
		}
	}
	if (e==0)
	cout<<-1;
	else
	cout<<e;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
