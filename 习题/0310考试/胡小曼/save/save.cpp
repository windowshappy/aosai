#include<iostream>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int b,a,n,s=0,o,p,m=0,z;
	for(int i=1;i<=12;i++)
	{
		cin>>a;
		m=m+300;
		if(m<a) 
		{
			cout<<-i;
			return 0;
		}
		o=(m-a)/100;
		s=s+o*100;
		m=m-a-(o*100);
		
	}
	z=s+s*0.2+m;
	cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
