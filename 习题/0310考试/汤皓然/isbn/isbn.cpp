#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	char a,b,c,d,e,f,g,h,i,j,k,l,m;
	int s;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
	a-=48;
	c-=48;
	d-=48;
	e-=48;
	g-=48;
	h-=48;
	i-=48;
	j-=48;
	k-=48;
	m-=48;
	s=a*1+c*2+d*3+e*4+g*5+h*6+i*7+j*8+k*9;
	s%=11;
	a+=48;
	c+=48;
	d+=48;
	e+=48;
	g+=48;
	h+=48;
	i+=48;
	j+=48;
	k+=48;
	if(s==m)
	{
		cout<<"Right";
		return 0;
	}
	else
	{
		cout<<a<<"-"<<c<<d<<e<<"-"<<g<<h<<i<<j<<k<<"-"<<s;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
