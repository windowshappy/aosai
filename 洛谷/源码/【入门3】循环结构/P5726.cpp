#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,a,maxn=-1,minn=11;
	double ans=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		if(maxn<a) maxn=a;
		if(minn>a) minn=a;
		ans+=a;
	}
	ans-=maxn;
	ans-=minn;
	printf("%.2lf",ans/(n-2));
	return 0;
}
