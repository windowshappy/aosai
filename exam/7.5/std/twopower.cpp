#include<iostream> 
#include<cstdio>
#include<cmath>
using namespace std;
int x=0,p[16];
bool first=true;
void npow(int n)
{
	int i;
	while(n)
	{
	 for(i=x;i>=0;i--)
	  {
	  	if(p[i]<=n)
	  	{
		 n=n-p[i];
		 if(first) first=false;
		 else cout<<'+';
		 if(i>1)
		 {
		  cout<<"2(";
		  first=true;
		  npow(i);
		  cout<<')';
		  break; 
		 }
		 if(i==1) cout<<"2";
		 if(i==0) cout<<"2(0)"; 
		}
	  }	
		
	} 
}
int main()
{
	freopen("twopower.in","r",stdin);
	freopen("twopower.out","w",stdout);
	int n;
	cin>>n;
	p[0]=1;
	while(p[x]<n)
	{
		x++;
		p[x]=p[x-1]*2;
	}
	npow(n);
	cout<<endl;
	return 0;
	
	
}
