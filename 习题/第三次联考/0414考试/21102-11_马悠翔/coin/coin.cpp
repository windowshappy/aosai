#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen ("coin.in","r",stdin);
	freopen ("coin.out","w",stdout);
	
	int n=1,k,s=0,l=0;
	cin>>k;
	for (int j=1;;j++)
	{
		if (l==k)
		{
			break;
		}
		for (int i=1;i<=j;i++)
		{
			if (l==k)
			{
				break;
			}
			else
			{
//				cout<<".";
				s+=n;
				l+=1;
			}
		}
		n+=1;
	}
	cout<<s;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
