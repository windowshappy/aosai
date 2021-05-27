#include<iostream>
#include<cstdio>
using namespace std;
int s[9];
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a,b,final=1,i=1,j=8;
	cin>>a>>b;
	if(a==b)
	{
		while(a!=0)
		{
		s[i]=a%10;
		a=a/10;
		i++;
		}
		for(i=1;i<=4;i++)
		{
			if(s[i]!=s[j])
			{
			final=0;
			}
			j--;
		}
		cout<<final;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
