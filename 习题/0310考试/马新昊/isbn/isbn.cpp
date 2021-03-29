#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int a1,a2,a3,a4,a5,a6,a7,a8,a9,x,s;
	char b1,b2,b3;
	cin>>a1>>b1>>a2>>a3>>a4>>b2>>a5>>a6>>a7>>a8>>a9>>b3>>x;
	s=1*a1+2*a2+3*a3+4*a4+5*a5+6*a6+7*a7+8*a8+9*a9;
	s=s%11;
	if(s==x){
		cout<<"Right";
	}else{
		if(s==10){
				cout<<a1<<b1<<a2<<a3<<a4<<b2<<a5<<a6<<a7<<a8<<a9<<b3<<"X";
		}else{
				cout<<a1<<b1<<a2<<a3<<a4<<b2<<a5<<a6<<a7<<a8<<a9<<b3<<s;
		}
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
