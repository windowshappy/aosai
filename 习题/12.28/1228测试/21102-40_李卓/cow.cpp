#include<iostream>
#include<cstdio>
using namespace std;
int n,x;long long s=1;
int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	cin>>x>>n;
	for(int i=1;i<=n;++i){
		s=s*x+s;
	}
	cout<<s<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
