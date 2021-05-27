#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int c[1010];

int main(){
	
	freopen("seq.in","r",stdin);
	freopen("seq.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	
	for(int i=1;i<=n;i++)
		scanf("%d",&c[i]);
	
	int tot=0,ans=0;
	for(int i=1;i<=n;i++)
	{
		if(c[i]!=c[i-1])
			tot=0;
		tot++;
		if(abs(c[i]-c[i+1])==1)
		{
			int x=i+1,tott=0,tottt=0;
			while(c[x]==c[i+1])
				tott++,x++;
			if(abs(c[x]-c[x-1])==1)
			{
				int y=c[x];
				while(c[x]==y)
					tottt++,x++;
			}
			ans+=min(tot+tottt,tott);
			i=x;
		}
	}
	
	printf("%d",ans);
	
	return 0;
	
}
//5
//4
//4
//3
//2
//1
