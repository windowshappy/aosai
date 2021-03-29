#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",sdtout);
	int a,b,c,z;
	scanf("%d%d%d",&a,&b,&c);
	z=a*0.2+b*0.3+c*0.5;
	printf("%d",z);
	fclose(sdtin);
	fclose(sdtout);
	return 0;
}
