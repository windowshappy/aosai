//chr:GB2312
#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("triangle.in","r",stdin);
	freopen("triangle.out","w",stdout);
	int n;
	int i,j,num=1;
	
	cin>>n;
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=i;j++)
		{
			printf("%d",num);
			num=(num+1)%10;
		}
		printf("\n");
	}
	fclose(stdin);fclose(stdout);
	return 0;
}

