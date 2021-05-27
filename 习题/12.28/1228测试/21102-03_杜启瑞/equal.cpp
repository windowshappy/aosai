#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int a[5],cnt,num;
string s;
int main(){
	freopen("equal.in","r",stdin);
	freopen("equal.out","w",stdout);
	cin>>s;
	s=s+'*';
	int l=s.size();
	for(int i=0;i<l;i+=1){
		if(s[i]>='0' and s[i]<='9') num=num*10+int(s[i]-'0');
		else if(s[i]=='+' or s[i]=='=' or s[i]=='*') a[++cnt]=num,num=0;
		else if(s[i]=='?') num=-1024;
	}
	if(a[1]==-1024) printf("%d",a[3]-a[2]);
	else if(a[2]==-1024) printf("%d",a[3]-a[1]);
	else if(a[3]==-1024) printf("%d",a[1]+a[2]);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
