#include<iostream>
#include<cstdio>
using namespace std;
long long a,b,s;
int aa[12],i,j,bb[12];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	if(a==1)aa[1]=1;
	while(a>=1)
	{	i++;aa[i]=a%10;a=a/10;
	}
	if(b>=0)
	while(b>=1)
	{
		j++;bb[j]=b%10;b=b/10;
	}
	if(b<0)
	while(b<=-1)
	{
		j++;bb[j]=b%10;b=b/10;
	}
	for(int k=1;k<=i;k++)
	for(int o=1;o<=j;o++)
	{
		s=s+aa[k]*bb[o];
	}
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}
