#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
string s;
int ans,v=1;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	
	cin>>s;
	for(int i=0;i<s.size()-1;i++){
		if(s[i]>='0'&&s[i]<='9') {
			ans=(ans+v*(s[i]-'0'))%11;
			v++;
		}
	}
	ans%=11;
	if(ans==(s[s.size()-1]-'0')) cout<<"Right";
	else if(ans==10){
		if(s[s.size()-1]=='X') cout<<"Right";
	}
	else {
		for(int i=0;i<s.size()-1;i++) cout<<s[i];
		if(ans==10) cout<<"X";
		else cout<<ans;
	}
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
