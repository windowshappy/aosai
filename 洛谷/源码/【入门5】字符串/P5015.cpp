#include<bits/stdc++.h>
using namespace std;

int strLong(string i){
	int l = i.length();
	for(int j=0;j<i.length();j++){
		if(i[j]==' '){
			l--;
		}
	}
	return l;
}
int main(){
	string text;
	getline(cin, text);
	cout<<strLong(text);
	return 0;
} 


