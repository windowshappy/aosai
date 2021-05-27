#include<iostream>
#include<cstdio>

using namespace std;

long long a,b;
int s1,s2,ans;

int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	
	cin>>a>>b;
	
	while(a)
	{
		s1+=(a%10);
		
		a/=10;
	}
	
	while(b)
	{
		s2+=(b%10);
		
		b/=10;
	}
	
//	cout<<s1<<" "<<s2<<endl;
	
	ans=s1*s2;
	
	cout<<ans;
	
	fclose(stdin);
	fclose(stdout);

	return 0;
}
