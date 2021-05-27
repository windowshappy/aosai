#include<iostream>
#include<cstdio>
using namespace std;
int a1,a2,b1,b2,c1,c2,s1,s2;
int a[10],m,t,s,w,z;
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>s1>>s2;
	a1=s1/10000;c1=s1%100;b1=s1/100-a1*100;
	a2=s1/10000;c2=s2%100;b2=s2/100-a2*100;
	if(s1==s2)
	{	m=s1;
		while(m>=1)
		{	t++;a[t]=m%10;m=m/10;
		}
		for(int i=1;i<=8;i++)
			if(a[i]==a[9-i])s++;
		if(s==8) cout<<1;
		else cout<<0;
		return 0;
	}
	for(int i=a1;i<=a2;i++)
	for(int j=b1;j<=12;j++)
 {
	if(j==1||j==3||j==5||j==7||j==8||j==10||j==12) w=31;
	if(j==2||j==4&&j==6&&j==9&&j==11) w=30;
	if(((i%4==0&&i%100!=0)||i%400==0)&&j==2) w=28;
	for(int k=c1;k<=w;k++)
	{	s=0;
		m=i*10000+j*100+k;
		while(m>=1)
		{	
		t++;a[t]=m%10;m=m/10;
		}
		for(int o=1;o<=8;o++)
		{
		  if(a[o]==a[9-o])s++;
		  if(s==8) 
		  {z++;break;}
		}
	}
 }
	cout<<z;
 	fclose(stdin);fclose(stdout);
	return 0; 
}
