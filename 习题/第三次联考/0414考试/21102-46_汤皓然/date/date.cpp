#include<iostream>
#include<cstdio>
using namespace std;
int a[8],n[10];
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int d1,d2,o,p,r=0,i,k=0,q=1,z,m,d,s=0,f;
	cin>>d1>>d2;
	if(d1==d2)
	{
		while(r<8)
		{
			a[r]=d1%10;
			d1/=10;
			r++;
		}
		if( (a[0]==a[7]) && (a[1]==a[6]) && (a[2]==a[5]) && (a[3]==a[4]) )
		{
			cout<<"1";
			return 0;
		}
		else
		{
			cout<<"0";
			return 0;
		}
	}
	else
	{
		o=d1/10000;
		p=d2/10000;
		for(i=o;i<=p;i++)
		{
			if(i%4==0 && i%100!=0)
				k=1;
			else if(i%400==0)
				k=1;
			z=i;
			while(q<=4)
			{
				n[q]=z%10;
				z/=10;
				q++;
			}
			q=1;
			m=n[1]*10+n[2];
			d=n[3]*10+n[4];
			if( m>=1 && m<=12)
			{
				if(m==2)
				{
					if( d>=1 && d<=28+k )
						s++;
				}
				else if( m==4 || m==6 || m==9 || m==11 )
				{
					if( d>=1 && d<=30 )
						s++;
				}
				else
				{
					if( d>=1 && d<=31)
						s++;
				}
			}	
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
