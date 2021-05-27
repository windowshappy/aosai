//chr:GB2312
#include<iostream>
#include<cstdio>
using namespace std;

int n,c,ans=2147483647;
int t[2100];
int f[2100][2];

/*void dfs(int x,int k,bool f)
{
	if(k>ans)return;
	if(x==2001)
	ans=min(k,ans);
	else
	{
		if(!t[x])dfs(x+1,k,0);
		else
		{
			if(!f)dfs(x+1,k,1);
			dfs(x+1,k+t[x],0);
		}
	}
}*/
int main()
{
	freopen("seq.in","r",stdin);
	freopen("seq.out","w",stdout);
	int i,j;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		scanf("%d",&c);
		++t[c];
	}
	
	for(i=1;i<=2000;i++)
	if(t[i])
	{
		f[i][1]=f[i-1][0];
//		if(!t[i-1])f[i][1]=f[i-1][1];
		f[i][0]=f[i-1][1]+t[i];
	}
	else
	f[i][0]=f[i-1][0],f[i][1]=f[i-1][1];
	cout<<min(f[2000][0],f[2000][1]);
	
	/*dfs(1,0,0);
	cout<<ans;*/
	fclose(stdin);fclose(stdout);
	return 0;
}

