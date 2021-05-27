#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a1,a2,b1,b2,s;
	cin>>l>>a1>>a2>>b1>>b2;
	l=l+1;
	if(a2>=b1)
	{
		s=b2-a1+1;
	}
	else
	{
		s=(a2-a1+1)+(b2-b1+1);
	}
	cout<<l-s<<endl;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
