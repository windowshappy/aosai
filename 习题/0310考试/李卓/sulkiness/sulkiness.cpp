#include<iostream>
#include<cstdio>
using namespace std;
int a[10],b[10],s[10],maxx;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	for(int i=1;i<=7;++i){
		cin>>a[i]>>b[i];
		if(a[i]+b[i]>8)
			s[i]=s[i-1]+1;
		if(a[i]+b[i]<=8)
			maxx=max(s[i-1],maxx);
		if(i==7)
			maxx=max(s[i],maxx);
	}
	//for(int i=1;i<=7;++i)cout<<s[i]<<" ";cout<<endl;cout<<maxx<<endl;
	for(int i=1;i<=7;++i){
		if(maxx==s[i]){
			cout<<i<<endl;break;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
