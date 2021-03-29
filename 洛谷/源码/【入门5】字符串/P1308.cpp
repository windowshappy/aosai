#include<iostream>
#include<cstring>
#include<cstdio>

using namespace std;

int main(){
	string target,a;
	getline(cin,target);
	getline(cin,a);
	for(int i=0;i<target.size();i++){
		target[i] = tolower(target[i]);
	}
	for(int i=0;i<a.size();i++){
		a[i] = tolower(a[i]);
	}
	int len = target.length();
	bool t = 0; int c = 0,d = -10;
	for(int i=0;i<a.length();i++){
		//if((a[i] == target[0]||a[i] + ' ' == target[0])) cout<<a[i+len+1]<<"---";
		if((a[i] == target[0])&&(i==0||a[i-1] == ' ')&&a[i+len] == ' '){
			for(int j=0;j<len;j++){
				cout<<a[i+j];
				if(a[i+j] == target[j]){
					t=1;
				}
				else{
					t=0;
				}
			}
			cout<<" ";
			if(t){
				//cout<<a[i]<<" "<<i<<endl;
				if(d == -10) d = i;
				c++;
			}
		}
	}
	if(c==0) cout<<-1;
	else cout<<c<<" "<<d;
}
