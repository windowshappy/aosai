#include<bits/stdc++.h>

using namespace std;

struct sos{
	string sosname;
	string text;
} p[200];

int main(){
	int n, m = -10;
	string a,b,mn;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b;
		p[i].sosname = a;
		p[i].text = b ;
	} 
	for(int i=0;i<n;i++){
		string t = p[i].text;
		int tt = 0;
		for(int j=0;j<t.length();j++){
			if(t[j] == 's' && t[j+1] == 'o' && t[j+2] == 's'){
				tt++;
			}
		}
		
		if(tt>m){
			m=tt;
			mn = p[i].sosname;
		}
		else if(tt==m){
			mn += " "+p[i].sosname;
		}
	}
	
	cout<<mn<<endl<<m;
} 
