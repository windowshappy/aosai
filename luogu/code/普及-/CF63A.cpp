#include<bits/stdc++.h>

using namespace std;

struct people{
	string a,b;
} p[101];


int main(){
	int n;
	cin>>n;
	for (int i = 0; i < n; ++i)
	{
		cin>>p[i].a;
		cin>>p[i].b;
	}

	for (int i = 0; i < n; ++i)
	{
		if(p[i].b == "rat"){
			cout<<p[i].a<<endl;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(p[i].b == "woman" || p[i].b == "child"){
			cout<<p[i].a<<endl;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(p[i].b == "man"){
			cout<<p[i].a<<endl;
		}
	}
	for (int i = 0; i < n; ++i)
	{
		if(p[i].b == "captain"){
			cout<<p[i].a<<endl;
		}
	}
	return 0;
}

