#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int n,x,y;
	int a[10100],b[10100],g[10100],k[10100];
	int i;
	bool f=0; //判断是否找到
	
	cin>>n;
	for(i=1;i<=n;i++) //注意g,k为长度
	 scanf("%d%d%d%d",&a[i],&b[i],&g[i],&k[i]);
	cin>>x>>y;
	
	for(i=n;i>=1;i--)//倒序遍历，找到最上面的地毯
	 if(a[i]<=x&&a[i]+g[i]>=x //横坐标覆盖
		&&b[i]<=y&&b[i]+k[i]>=y) //纵坐标覆盖
	{
		cout<<i; //输出结果
		f=1;
		break;
	}
	if(!f) cout<<-1; //未找到则输出-1
	
	fclose(stdin); fclose(stdout);
	return 0;
}
