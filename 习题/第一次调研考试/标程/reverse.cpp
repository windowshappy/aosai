#include<cstdio>
#include<cstdlib>
using namespace std;
int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout); 
	int n,s=0;
	scanf("%d",&n);
	while (n!=0)
	  {
	  	s=s*10+n%10;
	  	n=n/10;
	  }
	printf ("%d\n",s);
	return 0;
} 
