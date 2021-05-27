#include<iostream>
#include<cmath>
#include<cstdio>
using namespace std;
int k,t=0,y;long long s;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>k;
	for(int i=1;;i++)
    {
    	for(int j=1;j<=i;j++)
    	{
    		s+=i;
    		t++;
    		if(t==k)
    		{
			    y=1;
    			break;
    			
    		}
        }
        if(y==1)
          break;
    }
    cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
