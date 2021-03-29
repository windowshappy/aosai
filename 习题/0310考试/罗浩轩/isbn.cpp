#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	char a[11];
	int b[11],x=0;
	scanf("%c-%c%c%c-%c%c%c%c%c-%c",&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9],&a[10]);
	for(int i=1;i<=9;++i)
	{
		b[i]=a[i]-'0';
	}
	if(a[10]=='X')
	{
		b[10]=10;
	}
	else
	{
		b[10]=a[10]-'0';
	}
	for(int i=1;i<=9;++i)
	{
		x=x+b[i]*i;
	}
	if(x%11==b[10])
	{
		printf("Right");
	}
	else
	{
		if(b[10]!=10)
		{
			printf("%d-%d%d%d-%d%d%d%d%d-%d",b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9],x%11);
		}
		if(b[10]==10)
		{
			printf("%d-%d%d%d-%d%d%d%d%d-X",b[1],b[2],b[3],b[4],b[5],b[6],b[7],b[8],b[9]);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
