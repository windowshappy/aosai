#include <iostream>
#include <cstdio>
using namespace std;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,s,yz,sx;
	yz=sx=0;
	int j1,c1,j2,c2;
	cin>>l>>j1>>c1>>j2>>c2;
	s=l+1;
	if (j2<=c1)
	
	  {
	  	yz=c2-j1+1;
	  	sx=s-yz;
	  }
	  else
	    {
	    	yz=c1-j1+1+c2-j2+1;
	    	sx=s-yz;
	    }
	cout<<sx;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
