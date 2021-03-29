#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a,b,c,d,e,f,g,h,i,j;
	scanf("%d-%d%d%d-%d%d%d%d%d-%d",&a,&b,&c,&d,&e,&f,&g,&h,&i,&j);
	int s;
	s=1*a+2*b+3*c+4*d+5*e+6*f+7*g+8*h+9*i;
	s=s%11;
	if(a==j)
	{
		cout<<"Right";
	}
	else if(s==10)
	{
		printf("%d-%d%d%d-%d%d%d%d%d",a,b,c,d,e,f,g,h,i);
		cout<<"-X";
	}
	else
	{
		printf("%d-%d%d%d-%d%d%d%d%d-%d",a,b,c,d,e,f,g,h,i,s);
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
