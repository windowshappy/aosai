#include<bits/stdc++.h>

using namespace std;

struct student{
	int a,b,c;
} s[2000];

int main(){
	int n,a,b,c;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a>>b>>c;
		s[i].a = a;
		s[i].b = b;
		s[i].c = c;
	}
	for(int i = 0;i<n;i++){
		double t = s[i].b * 0.7 + s[i].c * 0.3;
		if(t>=80&&s[i].b+s[i].c>140){
			cout<<"Excellent"<<endl;
		}else{
			cout<<"Not excellent"<<endl;
		}
	}
}
