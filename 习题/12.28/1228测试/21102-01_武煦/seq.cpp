#include<cstdio>
#include<algorithm>
using namespace std;

int n;
int a[1010];
int f[1010][2];

int abs(int x){ return x > 0 ? x : -x; }

int main()
{
	freopen("seq.in", "r", stdin);
	freopen("seq.out", "w", stdout);
	
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
		scanf("%d", &a[i]);
	f[1][1] = 1;
	f[1][0] = 0;
	for(int i = 2; i <= n; i++)
	{
		f[i][0] = max(f[i-1][0], f[i-1][1]);
		
		int j = i-1;
		while(j > 0 and abs(a[i]-a[j]) == 1)
			j--;
		if(a[i] == a[j])
			f[i][1] = f[j][1]+1;
		else
			f[i][1] = max(f[j][0], f[j][1])+1;
	}
	printf("%d", n-max(f[n][0], f[n][1]));
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
