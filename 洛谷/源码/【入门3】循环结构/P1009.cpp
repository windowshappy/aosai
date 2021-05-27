#include<bits/stdc++.h>
using namespace std;

string Add(string a,string b){
	string ans;
	if(a.length()<b.length()){
		string temp = a;
		a=b;b=temp;
	}
	
	int a_len,b_len;
	a_len = a.length();
	b_len = b.length();
	for(int i=a_len;i>b_len;i--) b = '0'+b;
//	cout<<b;
	int up=0,down;
	long long i,j;
	for(i=a.size(),j=b.size();j>0;i--,j--){
//		if(a[i]==' '||b[i]==' ') continue;
		down = (a[i-1]-'0')+(b[j-1]-'0')+up;
//		cout<<down<<endl;
		up = down/10;
		ans =(char)(down%10+48)+ans;
		
	}
	if(up){
		ans = (char)(up+'0')+ans;
	}
//	cout<<ans;
	return ans;
}

string Mut(string a,string b){
	string ans;
	if(a.length()<b.length()){
		string temp = a;
		a=b;b=temp;
	}
	
	int a_len,b_len;
	a_len = a.length();
	b_len = b.length();
	for(int i=a_len;i>b_len;i--) b = '0'+b;
	int up=0,down[10000];
	long long i,j,t2=0;long long t;
	string temp[1000];
	int ttt=0,w=0;
	long long t1=0;
	for(j=b.size();j>0;j--){
		for(i=a.size();i>0;i--){
			t = int(a[i-1]-'0')*int(b[j-1]-'0');
			t1+=(t%10+up)*(int)(pow(10,ttt));
			up = t/10;
			ttt++;
		}
		if(up) t1+=up*(int)(pow(10,ttt));
		down[t2]=t1;
		ttt = 0;w++;t1=0;t2++;
	}
	t1=0;
	for(i=0;;i++){
		t1+=down[i];

		ans=char(t1%10+'0')+ans;
		if(t1<10) break;
		t1/=10;
	}
	
	return ans;
}

string FA(int a){

	string ans="1";
	for(int i=1;i<=a;i++){
		string b;
  		int temp = i;
		while(temp)
		{
			b = (char)(temp % 10 + '0') + b;
			temp /= 10;
		}
		ans = Mut(ans,b);
	}
	return ans;
}

int main(){
//	long long n;
//	string ans="0";
//	cin>>n;
//	for(int i=1;i<=n;i++){
//		ans = Add(ans,FA(i));
//	}
//	cout<<ans;
	cout<<Mut("123","456");
	
	return 0;
} 
