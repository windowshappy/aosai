#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int d1,d2,d=0,i,j,l,n1,n2,y1,y2,y3,r1,r3,r2,x1,x2,a,b=10;
	cin>>d1>>d2;
	x1=d1;x2=d2;
	n1=d1/10000;
	n2=d2/10000;
	y1=(d1%10000-d1%100)/100;
	y2=(d2%10000-d2%100)/100;
	r1=d1%100;
	r2=d2%100;
	y3=y2-y1;
	if(y3<0)
	{
		y3=y3+12;
	}
	if(n2-n1==0)
	{
		for(i=n1;i<=n2;i++)
	    {
		    for(j=y1;j<=y2;j++)
		    {
		    	if(j!=y3&&(j==1||j==3||j==5||j==7||j==8||j==10||j==12))
		    	{
		    		for(l=1;l<=31;l++)
		    		{
		    			for(a=1;a<=8;a++)
		    			{
		    				
		    			}
		    		}
		    	}
		    }
	    }
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
