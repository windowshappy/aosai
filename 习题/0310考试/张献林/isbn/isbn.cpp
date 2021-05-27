#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("sulkiness.in","r",stdin);
	freopen("sulkiness.out","w",stdout);
	int a[10];
	int s,a1,b1,c1,d1,a2,b2,c2,d2;
	scanf("%s-%s-%s-%s",&a1,b1,c1,d1) ;
	a2=a1;
	b2=b1;
	c2=c1;
	d2=d1;
	a[1]=a1;
	a[2]=b1/100;
	a[3]=b1/10%10;
	a[4]=b1%10;
	a[5]=c1/10000;
	a[6]=c1/1000%10;
	a[7]=c1/100%10;
	a[8]=c1/10%10;
	a[9]=c1%10;
	s=d1;
	a1=a[1]*1+a[2]*2+a[3]*3+a[4]*4;
	b1=a[5]*5+a[6]*6+a[7]*7+a[8]*8;
	c1=a[9]*9+a[10]*10;
	d1=a1+b1+c1;
	d1=d1%11;
	if(d1==s)
	  {
	  	cout<<"Right";
	  }
	else
	  {
	  	cout<<a2<<"-"<<b2<<"-"<<c2<<"-"<<d2;
	  }
	fclose(stdin);
	fclose(stdout);
	return 0;
}
