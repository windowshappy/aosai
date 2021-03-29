#include<cstdio>
using namespace std;

int main()
{
	freopen("equal.in", "r", stdin);
	freopen("equal.out", "w", stdout);
	
	int a = 0, b = 0, c = 0;
	int uk, p;
	
	char ch = getchar();//a
	if(ch == '?')
		uk = 1, ch = getchar();
	else while(ch >= '0' and ch <= '9')
		a = a*10 + ch - 48, ch = getchar();
	
	if(ch == '+')
		p = 1;
	else
		p = -1;
	
	ch = getchar();//b
	if(ch == '?')
		uk = 2, getchar(), ch = getchar();
	else
	{
		while(ch >= '0' and ch <= '9')
		  	b = b*10 + ch - 48, ch = getchar();
		ch = getchar();
	}
	
	if(ch == '?')
		uk = 3;
	else while(ch >= '0' and ch <= '9')
		c = c*10 + ch - 48, ch = getchar();
	
	if(uk == 1)
		printf("%d", c-b*p);
	else if(uk == 2)
		printf("%d", (c-a)*p);
	else
		printf("%d", a+b*p);
		
	fclose(stdin);
	fclose(stdout);
	return 0;
}
