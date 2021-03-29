#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
	int a,b,c;
	int d,e,f,g;
	cin>>a>>b>>c;
	d=a/5 ;
	e=b*0.3;
	f=c/2;
	if(e==0)
	cout<<d+e+f;
	else
	cout<<d+e+f+1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
