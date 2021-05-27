#include<iostream>
#include<string>
#include<cstdio>
using namespace std;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	int a1[8];
	string a,b;
	cin>>a>>b;
	if(a==b){
		if(a[0]==a[7]&&a[1]==a[6]&&a[2]==a[5]&&a[3]==a[4]){
			cout<<1;
		}
		else cout<<0;
	}
	else {
		cout<<3;
		
	}
	
	fclose(stdin);fclose(stdout);
	return 0;
}
