#include<iostream>
#include<cstdio>

using namespace std;

int n;
int s;

int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	
	cin>>n;
	
	int y=1,x=1;
	
	for(int i=1;i<=n;i++)
	{
		
		y--;
		s+=x;
		
		if(y==0)
		{
			x++;
			
			y=x;
		}
		
	}
	
	cout<<s;
	
	fclose(stdin);
	fclose(stdout);

	return 0;
}
