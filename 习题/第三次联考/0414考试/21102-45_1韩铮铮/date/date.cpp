#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a[9],b[9],s;
	int w,e,r;
	for(int i=1;i<=8;i++)
	{
		cin>>a[i];
	}
	for(int i=1;i<=8;i++)
	{
		cin>>b[i];
	}
	for(int i=a[7]*10+a[8];i<=b[7]*10+b[8];i++)
	{
		
	}
	if(a[5]*10+a[6]==4||6||9||11)
	{
		a[7]*10+a[8]<=30;
	}
     else if(a[5]*10+a[6]==2) 
	{
		if(a[1]*1000+a[2]*100+a[3]*10+a[4]%4==0)
		{
			a[7]*10+a[8]<=29;
		}
		else
		{
			a[7]*10+a[8]<=28;
		}
	}
	else
	{
		a[7]*10+a[8]<=31;
	}
	for(int i=1;i<=8;i++)
	{
		cin>>b[i];
	}
	
	
	
	
	
	
	
	
	
	
/*	w=(b[1]*1000+b[2]*100+b[3]*10+b[4])-(a[1]*1000+a[2]*100+a[3]*10+a[4]);
	if(w>0)
	{
		e=(b[5]*10+b[6])*w-(a[5]*10+a[6]);
	}
	else
	{
		e=(b[5]*10+b[6])-(a[5]*10+a[6]);
	}*/
	

	

}
