#include<bits/stdc++.h>
using namespace std;
int s,h,c,t;
double ans;
bool flag;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	for(int i=1;i<=12;i++)
	{
		h+=300;
		cin>>c;
		h-=c;
		if(h<0 and !flag)
		{
			ans=i*-1;
			flag=1;
		}
		else
		{
			t=h/100;
			s+=100*t;
			h%=100;
		}
	}
	if(!flag)
	{
		ans=h+s*1.2;
	}
	cout<<ans<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
