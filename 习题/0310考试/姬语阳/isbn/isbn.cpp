#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a,b,c,d,sum=0;
	cin>>a>>b>>c>>d;
	b=-b;c=-c;d=-d;
	sum+=a*1;
	sum+=(b/100)*2;
	sum+=(b/10%10)*3;
	sum+=(b%10)*4;
	sum+=(c/10000)*5;
	sum+=(c/1000%10)*6;
	sum+=(c/100%10)*7;
	sum+=(c/10%10)*8;
	sum+=(c%10)*9;
	sum%=11;
	if(sum==d) cout<<"Right";
	else if(sum!=10) printf("%d-%d-%d-%d",a,b,c,sum);
	else printf("%d-%d-%d-X",a,b,c);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
