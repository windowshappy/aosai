#include<cstdio>
#include<vector>
using namespace std;

struct link{
	int to, br, next;
};

int n, m;
link side[55];
int head[15], cnt;
bool vis[55];
int c[15];

void add(int a, int b)
{
	side[++cnt].to = b;
	side[cnt].next = head[a];
	side[cnt].br = cnt+1;
	head[a] = cnt;
	
	side[++cnt].to = a;
	side[cnt].next = head[b];
	side[cnt].br = cnt-1;
	head[b] = cnt;
}
void dfs(int x)
{
	c[x]--;
	for(int i = head[x]; i != 0; i = side[i].next)
	{
		if(!vis[i])
		{
			vis[i] = vis[side[i].br] = true;
			dfs(side[i].to);
		}
	}
}
void work(int x)
{
	for(int i = head[x]; i != 0; i = side[i].next)
	{
		if(!vis[i])
		{
			vis[i] = vis[side[i].br] = true;
			dfs(side[i].to);
		}
	}
}

int main()
{
	freopen("colour.in", "r", stdin);
	freopen("colour.out", "w", stdout);
	
	scanf("%d%d", &n, &m);
	int a, b;
	for(int i = 1; i <= m; i++)
	{
		scanf("%d%d", &a, &b);
		add(a, b);
	}
	for(int i = 1; i <= n; i++)
		c[i] = 4;
	for(int i = 1; i <= n; i++)
	  if(!vis[i])
		work(i);
	int sum = 1;
	for(int i = 1; i <= n; i++)
		sum *= max(0, c[i]);
	printf("%d", sum);
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
