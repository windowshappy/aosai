#include<iostream>
#include<string>
#include<cstdio>
int sum;
using namespace std;
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	string a,b;
	cin>>a>>b;
	for(int i=0;i<a.size();i++){
		for(int j=0;j<b.size();j++){
			sum=sum+(a[i]-48)*(b[j]-48);
		}
	}
	cout<<sum;
	fclose(stdin);fclose(stdout);
	return 0;
}
