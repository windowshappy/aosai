#include<iostream>
#include<cstdio>
#include<string>
using namespace std; 
int main(){
freopen("cowmult.in","r",stdin);
freopen("cowmult.out","w",stdout);
	string a; string b; int q,w;
	cin>>a>>b;
	int a1,b1;
	a1=a.size();
	b1=b.size();
	int sum=0;
	for(int m=0;m<a1;m++){
		q=a[m]-48;
		for(int n=0;n<b1;n++) {
			w=b[n]-48;
			sum+=q*w;
			
		}
	}
	
	cout<<sum; 
	
fclose(stdin);
fclose(stdout);return 0;
}
