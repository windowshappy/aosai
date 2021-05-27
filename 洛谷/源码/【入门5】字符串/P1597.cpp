#include<bits/stdc++.h>

using namespace std;

int main(){
	string t;
	cin>>t;
	int a=0,b=0,c=0;
	for(int i=0;i<t.length();i++){
		if(t[i]==';'){
			if(t[i-1] == 'a'){
				switch(t[i-4]){
					case 'a':
						a = a;
						break;
					case 'b':
						b = a;
						break;
					case 'c':
						c = a;
						break;
				}
			}
			else if(t[i-1] == 'b'){
				switch(t[i-4]){
					case 'a':
						a = b;
						break;
					case 'b':
						b = b;
						break;
					case 'c':
						c = b;
						break;
				}
			}
			else if(t[i-1] == 'c'){
				switch(t[i-4]){
					case 'a':
						a = c;
						break;
					case 'b':
						b = c;
						break;
					case 'c':
						c = c;
						break;
				}
			}
			else{
				switch(t[i-4]){
					case 'a':
						a = t[i-1] - '0';
						break;
					case 'b':
						b = t[i-1] - '0';
						break;
					case 'c':
						c = t[i-1] - '0';
						break;
				}
			}
		}
	}
	
	cout<<a<<" "<<b<<" "<<c;
}
