#include<iostream>
#include<cstring>

using namespace std;

int main(){
	int boy = 0,girl = 0;
	string a;
	getline(cin,a);
	
	for(int i=0;i<a.length();i++){
		if(a[i] == 'b'||a[i+1] == 'o' || a[i+2] == 'y'){
			boy++;
			//a[i] = a[i+1]=a[i+2] = '.';
		}
		if(a[i] == 'g'||a[i+1] == 'i' || a[i+2] == 'r' || a[i+3] == 'l'){
			girl++;
			//a[i] = a[i+1]=a[i+2] =a[i+3] = '.';
		}
	}
	cout<<boy<<endl<<girl;
}
