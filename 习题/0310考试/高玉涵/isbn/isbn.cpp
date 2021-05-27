#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a,b,c,d,e,f,g,h,i,l;
	char x,y,z,j;
	scanf("%d%c%d%d%d%c%d%d%d%d%d%c%c",&a,&x,&b,&c,&d,&y,&e,&f,&g,&h,&i,&z,&j);
	l=(a*1+b*2+c*3+d*4+e*5+f*6+g*7+h*8+i*9)%11;
	if(j!='X')
	{
		if(j-'0'==l)
		{
			cout<<"Right";
		}
		else
		{
			printf("%d%c%d%d%d%c%d%d%d%d%d%c%d",a,x,b,c,d,y,e,f,g,h,i,z,l);
		}
	}
	else 
	{
		if(l==10)
		{
			cout<<"Right";
		}
		else 
		{
			printf("%d%c%d%d%d%c%d%d%d%d%d%c%d",a,x,b,c,d,y,e,f,g,h,i,z,l);
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
