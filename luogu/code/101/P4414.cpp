#include<bits/stdc++.h>
using namespace std;
int main(){
	int a,b,c,a1,b1,c1;
	char l[3];
	cin>>a1>>b1>>c1;
	
	int sum=a1+b1+c1;
	a=min(min(a1,b1),c1);
	c=max(max(a1,b1),c1);
	b=sum-a-c;
	cin>>l;
	switch(l[0]){
			case 'A':
				cout<<a;
				break;
			case 'B':
				cout<<b;
				break;
			case 'C':
				cout<<c;
				break;
		}
	for(int i=1;i<3;i++){
		switch(l[i]){
			case 'A':
				cout<<" "<<a;
				break;
			case 'B':
				cout<<" "<<b;
				break;
			case 'C':
				cout<<" "<<c;
				break;
		}
	}
	return 0;
} 
