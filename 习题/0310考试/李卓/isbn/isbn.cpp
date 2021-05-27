#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
string a;int s,l,p;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	cin>>a;l=a.size();
	for(int i=0;i<=l-2;++i){
		if(a[i]>='0'&&a[i]<='9'){
			++p;s+=int(a[i]-48)*p;
		}
	}
	if(s%11==int(a[l-1]-48)||(s%11==10&&a[l-1]=='X')){
		cout<<"Right";
	}
	else{
		for(int i=0;i<=l-2;++i){
			cout<<a[i];
		}
		if(s%11==10)cout<<"X";
		else cout<<s%11;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
