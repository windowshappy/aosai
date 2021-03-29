#include<cstdio>
using namespace std;

int main()
{
	freopen("triangle.in", "r", stdin);
	freopen("triangle.out", "w", stdout);
	
	int n, tot = 0;
	scanf("%d", &n);
	for(int i = 1; i <= n; i++)
	{
		for(int j = 1; j <= i; j++)
			printf("%d", (++tot)%10);
		printf("\n");
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
