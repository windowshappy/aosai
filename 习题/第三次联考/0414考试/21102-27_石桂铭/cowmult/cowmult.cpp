#include<iostream>
#include<cstdio>
using namespace std;
struct nade{
	int num[11],n,x1,y1;
}a[3];
void out(nade x,nade y){
	int ans=0;
	for(int i=1;i<=x.x1;i++){
		for(int j=1;j<=y.y1;j++){
			ans+=x.num[i]*y.num[j];
		}
	}
	cout<<ans;
	return;
}
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a[1].n>>a[2].n;
	int arr=a[1].n,brr=a[2].n;
	while(arr){
		a[1].x1++;
		a[1].num[a[1].x1]=arr%10;
		arr/=10;
	}
	while(brr){
		a[2].y1++;
		a[2].num[a[2].y1]=brr%10;
		brr/=10;
	}
	out(a[1],a[2]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
