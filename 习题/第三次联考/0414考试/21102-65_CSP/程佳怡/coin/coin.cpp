#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
    int k,t=0,q=1;
    long long s=0;
    cin>>k;
    for(int i=1;i<=k;i++)
    {
    	s=s+q;
    	t++;
    	if(t==q)
    	{
    		t=0;
    		q++;
    	}
    }
    cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
