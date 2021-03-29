#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,s,z,h=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>s>>z;
		if(s>=90&&s<=140&&z>=60&&z<=90){
			h++;
		}
		else{
			h=0;
		}
	}
	cout<<h;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

