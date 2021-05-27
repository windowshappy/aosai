#include<iostream>
#include<cstdio>
using namespace std;
int x[10];
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
    int a,b,s=0,y,m,n;
    cin>>a>>b;
    while(a<=b)
    {
    	y=a;
    	n=0;
    	m=1;
    	while(y>0)
        {
            x[m]=y%10;
    	    y=y/10;
    	    m++;
        }
    	for(int i=1;i<=4;i++)
    	{
    		if(x[i]==x[9-i])
    		{
    			n++;
    		}
    	}
    	if(n==4)
    	{
    		s++;
    	}
    	int z=(a-a/10000*10000)/100;
    	int w=a%100;
    	if(z==12)
    	{
    		if(w==31)
    		{
    			a=a+8870;
    		}
    		else
    		{
    			a=a+1;
    		}
    	}
    	else if(z==1||3||5||7||8||10)
    	{
    		if(w==31)
    		{
    			a=a+70;
    		}
    		else
    		{
    			a=a+1;
    		}
    	}
    	else if(z==4||6||9||11)
    	{
    		if(w==30)
    		{
    			a=a+71;
    		}
    		else
    		{
    			a=a+1;
    		}
        }
        else if(z==2)
        {
        	if(a/10000%4==0)
        	{
        		if(w==29)
    		    {
    			    a=a+72;
    		    }
    		    else
    		    {
    			    a=a+1;
    		    }
        	}
        	else
			{
        		if(w==28)
    		    {
    			    a=a+73;
    		    }
    		    else
    		    {
    			    a=a+1;
    		    }
        	}
        }
    }
    cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
