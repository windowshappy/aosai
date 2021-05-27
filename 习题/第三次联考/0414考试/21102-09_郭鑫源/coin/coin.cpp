#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
int k,ans,l=0,kk;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
    cin>>k;
    for(int i=1;i<=k;i++)
    {
    	kk++;
    	if(kk>=l)
    	{
    		l++;
    		kk=0;
    	}
    	ans+=l;
    }
    cout<<ans;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
