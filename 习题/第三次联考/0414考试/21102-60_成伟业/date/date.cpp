#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int h,t,n,m=0;
bool f=0;
string a,b,q;
int ans=0;
int w[9];
bool hw(string s)
{
	int s1=s.size();
	h=0,t=s1-1;
	while(h<=t)
	{
		if(s[h]!=s[t])
		return 0;
		h++;
		t--;
	}
	return 1;
}
bool hw1(int a)
{
	m=0;
	int h=1,t=8;
	while(a>0)
	{
		w[++m]=a%10;
		a/=10;
	}
	while(h<=t)
	{
		if(w[h]!=w[t])
		return 0;
		h++; t--;
	}
	return 1;
}
/*int yf1(int a)
{
	if(a%10==0&&a/10==3&&(a/100==4||a/100==6||a/100==9||(a/100==1&&a/1000==1)))
	return 1;
	
}*/
int main()
{
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	cin>>a>>b;
	if(a==b)
	{
		cout<<hw(a);
	}
	else{
		int a1=0,b1=0;
		for(int i=0;i<=7;i++)
		{
			a1+=(a[i]-'0')*pow(10,7-i);
			b1+=(b[i]-'0')*pow(10,7-i);
		}
		for(int i=a1;i<=b1;i++)
		{
			if(hw1(i)==1)
			ans++;
		}
		cout<<ans;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
} 
