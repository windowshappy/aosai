#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstring>
#include<string>
using namespace std;

string a,b;
int x[12],y[12],t,s;


int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	cin>>a>>b;
	for(int i=0;i<a.size();i++)
	{
		x[i]=a[i]-48;
	}
	for(int i=0;i<b.size();i++)
	{
		y[i]=b[i]-48;
	}
	for(int i=0;i<a.size();i++)
    {
    	for(int j=0;j<b.size();j++)
    	{
    		s+=x[i]*y[j];
    	}
    }
	cout<<s;
	fclose(stdin);fclose(stdout);
	return 0;
}


