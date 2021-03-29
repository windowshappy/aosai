#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
	freopen("save.out","w",stdout);
	int a,b=0,c,d,e=0; 
	for(int i=1;i<=12;++i)
	{
		scanf("%d",&a);
		e=e+300;
		c=e-a;
		if(c<0)
		{
			printf("-%d",i);
			return 0;
		}
		d=c/100*100;
		e=e+c-d;
		b=b+d;
	}
	printf("%d",b*1.2);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
