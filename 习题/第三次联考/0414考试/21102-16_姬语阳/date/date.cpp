#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int f,s,ans=0;cin>>f>>s;
	for(int i=f/10000;i<=s/10000;i++)
	{
		int m=i%100/10+i%10*10,d=i/100%10*10+i/1000;
		if(m>12||m<=0) continue;
		if(d>31||d<=0) continue;
		if(((m==4)||(m==6)||(m==9)||(m==11))&&d>30) continue;
		if(m==2&&d>29) continue;
		if(i*10000+m*100+d<=s&&i*10000+m*100+d>=f) ans++;
	}
	cout<<ans;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
