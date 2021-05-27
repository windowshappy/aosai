#include<cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkinless.out","w",stdout);
	int maxn=0,a,b,dt,rq=0;
	for(int i=1;i<=7;++i)
	{
		scanf("%d%d",&a,&b);
	    dt=a+b;
	    if(dt>maxn)
	    {
	    	maxn=dt;
	    	rq=i;
	    }
	}
	printf("%d",rq);
	fclose(sdtin);
	fclose(stdout);
	return 0;
}
