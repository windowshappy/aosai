#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("save.in","r",stdin);
    freopen("save.out","w",stdout);
	int a,s1=0,m=0,x=1,y;
	for (int i=1;i<=12;i++)
	  {
	  	cin>>a;
	  	s1+=300;
	  	s1-=a;
	  	m+=s1/100*100;
	  	s1=s1%100;
	  	if(s1<0)
	  	  {
	  	  	x=0;
	  	  	y=i;
	  	  	break;
	  	  }
	  }
    if (x==1)
      cout<<s1+m*1.2;
    else
      cout<<"-"<<y;
	return 0;
}
