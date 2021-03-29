#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

struct student{
	string name;
	int a,b,c;
};

student s[2000];

int main(){
	int n,a,b,c;
	string name;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>name>>a>>b>>c;
		s[i].name = name;
		s[i].a = a;
		s[i].b = b;
		s[i].c = c;
	}
	int index, max = 0;
	for(int i=0;i<n;i++){
		if(s[i].a+s[i].b+s[i].c>max){
			max = s[i].a+s[i].b+s[i].c;
			index = i;
		}
	}
	
	cout<<s[index].name<<" "<<s[index].a<<" "<<s[index].b<<" "<<s[index].c;
}

