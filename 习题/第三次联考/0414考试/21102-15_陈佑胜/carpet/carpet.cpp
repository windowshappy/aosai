#include<cstdio>
#include<iostream>
using namespace std;
int a[1001],b[1001],g,k;
int o[1001],p[1001];
int ans[1001];
int main()
{
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	int num=0,max=-1;
	int n;
	int x,y;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		cin>>a[i]>>b[i]>>g>>k;
		o[i]+=a[i]+g;
		p[i]+=b[i]+k;
	}
	cin>>x>>y;
	for(int i=1;i<=n;i++){
		if((a[i]<=x&&x<=o[i])&&(b[i]<=y&&y<=p[i])){
			ans[i]=i;
			num++;
		}
	}
	for(int i=1;i<=num;i++){
		if(ans[i]>max){
			max=ans[i];
		}
	}
	printf("%d",max);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
