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
	for(i=0;i<a.size();i++) //����a��ÿһλ
	 for(j=0;j<b.size();j++) //����b��ÿһλ
	 {
	 	ans+=(a[i]-'0')*(b[j]-'0'); //ע��Ҫ-'0'
	 }
	cout<<ans;
	
	fclose(stdin); fclose(stdout);
	return 0;
}
