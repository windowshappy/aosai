#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int a,s=0,c=0,z=1,h;
	for(int i=1;i<=12;i++)
	{
		cin>>a;
		int num=300+s-a;
		if(num<0&&z==1) 
		{
			z=0;h=i;
		}
		s=num;
		c=c+s/100*100;
		s=s-s/100*100;
	}
	if(z==0) cout<<-h;
	else cout<<c*1.2+s;
	fclose(stdin);fclose(stdout);
	return 0;
}
