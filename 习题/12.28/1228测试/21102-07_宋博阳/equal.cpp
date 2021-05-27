#include<iostream>
#include<cstdio>
using namespace std;
int num[3];

int main(){
	
	freopen("equal.in","r",stdin);
	freopen("equal.out","w",stdout);
	
	string s;
	int tot=1;
	bool kd=false,k=false,kf=false;
	cin>>s;
	
	for(int i=0;i<s.size();i++)
	{
		bool x=false;
		if(s[i]=='?'&&!kd)
			k=true;
		if(s[i]=='+') kf=true;
		if(s[i]=='=') kd=true;
		
		while(s[i]>='0'&&s[i]<='9')
			num[tot]=num[tot]*10+s[i]-'0',i++,x=true;
		if(x) tot++,i--;
	}
	
	if(s[0]=='?')
	{
		if(kf) cout<<num[2]-num[1];
		else cout<<num[2]+num[1];
	}
	
	else
	{
		if(!k)
		{
			if(kf) cout<<num[1]+num[2];
			else cout<<num[1]-num[2];
		}
		else
		{
			if(kf) cout<<num[2]-num[1];
			else cout<<num[1]-num[2];
		}
	}
	
	return 0;
	
}


//a+b=?  a-b=?  a-?=b  a+?=b  ?+a=b ?-a=b
