#include<iostream>
#include<cstdio>
using namespace std;
int n,x1,y1,ans=-1;
struct nade{
	int x[5],y[5];
	int g,k;
}a[10010];
int main(){
	freopen("carpet.in","r",stdin);
	freopen("carpet.out","w",stdout);
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>a[i].x[1]>>a[i].y[1]>>a[i].g>>a[i].k;
		a[i].x[2]=a[i].x[1]+a[i].g;
		a[i].y[2]=a[i].y[1];
		a[i].x[3]=a[i].x[1]+a[i].g;
		a[i].y[3]=a[i].y[1]+a[i].k;
		a[i].x[4]=a[i].x[1];
		a[i].y[4]=a[i].y[1]+a[i].k;
	}
	cin>>x1>>y1;
	for(int i=n;i>=1;i--){
		if(x1<=a[i].x[2]&&x1>=a[i].x[1]&&y1<=a[i].y[3]&&y1>=a[i].y[2]){
			ans=i;
			break;
		}
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
