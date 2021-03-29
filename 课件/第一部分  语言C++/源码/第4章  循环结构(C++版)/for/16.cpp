#include<iostream> 
using namespace std;
int main()
{
	int x,n,t,i;
	t=0;n=0;
	for(i=1;i<=12;++i)
	{
		cin>>x;
		t=t+300-x;
		if(t<0)
		{
			cout<<-i;
			return 0;
		}
		if(t>=100)
		{
			n=n+t/100;
			t=t%100;
		}
	}
	cout<<n*120+t;
	return 0;
	
}
 
