#include<cstdio>
#include<iostream>
using namespace std;
 
int x[10010][10010],n,a,b,g,k;

int main()
{
	freopen("carpet.in","w",stdin);
	freopen("carpet.out","r",stdout);
	cin>>n;
	for(int t=1; t<=n; t++)
	{
		cin>>a>>b>>g>>k;
		for(int i=a; i<=a+g; i++)
		{
			for(int j=b; j<=b+k; j++)
			{
				x[i][j]=t;
			}
		}
	}
	int qwq,quq;
	cin>>qwq>>quq;
    if(x[qwq][quq]!=0)
    {
    	cout<<x[qwq][quq];
    }
    else
    {
    	cout<<-1;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
}
