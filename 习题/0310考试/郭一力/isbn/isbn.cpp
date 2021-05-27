#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	//freopen("isbn.in","r",stdin);
	//freopen("isbn.out","w",stdout);
	int a,b,c,d,e,f,g,h,i,j,k,l,m;
	cin>>a>>b>>c>>d>>e>>f>>g>>h>>i>>j>>k>>l>>m;
	int x=(a*1+c*2+d*3+e*4+g*5+h*6+i*7+j*8+k*9)%11;
	if(x==m){
		cout<<"Right";
	}
	else{
		if(x==10){
			if(m=='X'){
				cout<<"Right";
			}
		}
		else{
			cout<<a<<b<<c<<d<<e<<f<<g<<h<<i<<j<<k<<l<<x;
		}
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}
