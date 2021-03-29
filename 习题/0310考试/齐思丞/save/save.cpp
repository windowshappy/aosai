#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	//freopen("save.in","r",stdin);
	//freopen("save.out","w",stdout);
	int a;
	double ans=0,cun=0;
	for(int i=1;i<=12;i++)
	{
		ans+=300;
		cin>>a;
		ans-=a;
		cun+=ans-ans%100;
		ans-=cun;
		if(ans<0)
		{
			cout<<-i<<endl;
			return 0;
		}
	}
	cun*=1.2;
	cout<<ans+cun;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
