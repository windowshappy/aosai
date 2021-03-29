#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a,b,c,d;
	char aaa,bbb,ccc;
	cin>>a>>aaa>>b>>bbb>>c>>ccc>>d;
	int aa=a,bb=b,cc=c;
	int num=a;
	int z;
	for(int e=4;e>=2;e--)
	{
		z=b%10;
		num=num+z*e;
		b/=10;
	}
	for(int f=9;f>=5;f--)
	{
		z=c%10;
		num=num+z*f;
		c/=10;
	}
	num=num%11;
	if(int(d)==88) d=10;
	if(num!=d)
	{
		if(num!=10) cout<<aa<<aaa<<bb<<bbb<<cc<<ccc<<num;
		if(num==10) cout<<aa<<aaa<<bb<<bbb<<cc<<ccc<<"X";
	}
	else
	  cout<<"Right";
	fclose(stdin);fclose(stdout);
	return 0;
}
