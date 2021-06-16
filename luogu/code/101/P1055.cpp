#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	int a1,a2,a3,a4,l[9],t=0;
	char am,s[14],c;
	cin>>s;
	int t1 = 0;
	for(int i=0;i<11;i++){
		if(s[i]=='-');
		else{
			t1++;
			t+=(t1)*((int)s[i]-48);
		}
		
	}
	t%=11;
	if(t==10) c = 'X';
	else c=t+'0';
	if(c ==s[12]) cout<<"Right";
	else {
		s[12] = c;
		cout<<s;
	}
	return 0;
}
