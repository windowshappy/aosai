#include<iostream>
#include<cstdio>
using namespace std;
int n,s[5],p[5],sum,minn;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	cin>>n;
	for(int i=1;i<=3;++i)
	cin>>s[i]>>p[i];
	for(int i=1;i<=3;++i){
		sum=n/s[i];
		if(n%s[i]!=0)++sum;
		sum*=p[i];
		if(i!=1) minn=min(minn,sum);
		else minn=sum;
	}
	cout<<minn<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
