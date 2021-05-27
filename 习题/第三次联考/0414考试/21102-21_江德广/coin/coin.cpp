#include<iostream>
#include<cstdio>

using namespace std;

int ab(int a)
{
	int c=a*a;
	return c;
}

int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int a;
	cin>>a;
	int num=0;
	int y=1;
	int ans=0;
	while(ans<a)
	{
		num+=ab(y);
		ans+=y;
		y++;
	}
	y--;
    for(int i=ans-1;i>=a;i--)
    {
    	num-=y;
    }
    cout<<num;
	fclose(stdin);fclose(stdout);
	return 0;
}
