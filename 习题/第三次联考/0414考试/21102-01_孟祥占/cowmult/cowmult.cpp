#include<iostream>
#include<cstdio>
#include<string>
#include<cstring>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	string a,b;
	int i,j;
	int ans=0;
	
	cin>>a>>b;
	for(i=0;i<a.size();i++) //遍历a的每一位
	 for(j=0;j<b.size();j++) //遍历b的每一位
	 {
	 	ans+=(a[i]-'0')*(b[j]-'0'); //注意要-'0'
	 }
	cout<<ans;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
