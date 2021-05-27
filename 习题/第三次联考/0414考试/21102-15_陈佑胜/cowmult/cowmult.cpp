#include<cstdio>
#include<iostream>
#include<cstring>
using namespace std;
int sum=0;
int a,b,i=1,j=1,l1=0,l2=0;
int m[100000],n[100000];
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	scanf("%d%d",&a,&b);
	while(a!=0){
		m[i]=a%10;
		a/=10;
		i++;
		l1++;
	}
	while(b!=0){
		n[j]=b%10;
		b/=10;
		j++;
		l2++;
	}
	for(int i=1;i<=l1;i++){
		for(int j=1;j<=l2;j++){
			sum+=m[i]*n[j];
		}
	}
	printf("%d",sum);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
