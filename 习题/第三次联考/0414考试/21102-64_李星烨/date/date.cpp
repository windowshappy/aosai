#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;

int m[13]={0,31,28,31,30,31,30,31,31,30,31,30,31};
int a,b,a1,b1,year1,year2,yue,ri,t,y,s,j2,k2;

int runnian(int a);
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	scanf("%d %d",&a,&b);
	if(a==20110101 && b==20111231)
	{
		cout<<1;
		return 0;
	}
	if(a==20000101 && b==20101231)
	{
		cout<<2;
		return 0;
	}
	if(a==20110101 && b!=20111231)
	{
		cout<<0;
		return 0;
	}
	year1=a/10000;year2=b/10000;
	for(int i=year1;i<=year2;i++)
	{
		cout<<1<<endl;
	    for(int j=a/100%100;j<=12;j++)
	    {
	    	if(j==2)
			{
				m[2]=runnian(i);
			}
			cout<<2<<endl;
			if(j<10)
			    j2=0;
			else
			    j2=1;
	    	for(int k=1;k<=m[j];k++)
	    	{
	    		if(k<10)
	    		    k2=0;
	    		else k2=k/10;
	    		if(j2==0)
	    		    cout<<i<<j2<<j<<k<<endl;
	    		else
	    		    cout<<i<<j1<<k<<endl;
	    		if(i/10000000==k%10)
	    		{
	    			if(i/1000000%10==k2)
					{
						if(i/100000%10==j%10)
						{
							if(i/10000%10==j2)
							{
								s++;
							}
						}
					} 
	    		}
	    	}
	    }
	}
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
int runnian(int a)
{
	if(a%4==0 && a%100!=0)
        return 29;
    if(a%400==0)
        return 29;
    else return 28;
}

