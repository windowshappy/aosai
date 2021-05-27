#include<bits/stdc++.h>
using namespace std;
char c[13];
int a,b,ans,flag;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	cin>>c;
	flag=c[12]=='X'?10:c[12]-'0';
	for(int i=0;i<12;i++)
	{
		if(c[i]!='-')
		{
			a=c[i]=='X'?10:c[i]-'0';
			b++;
			ans+=a*b;
		}
	}
	ans%=11;
	if(ans==flag)
	{
		cout<<"Right"<<endl;
	}
	else
	{
		for(int i=0;i<12;i++)
		{
			cout<<c[i];
		}
		if(ans==10)
		{
			cout<<'X'<<endl;
		}
		else
		{
			cout<<ans<<endl;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
