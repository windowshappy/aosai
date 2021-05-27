#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
	int sum=0,num=0,shu=0;
	int a,c,e,g;
	char b,d,f;
	cin>>a>>b>>c>>d>>e>>f>>g;
	if(g='X')g=10;
	sum+=a*1;
	num+=c/100*2+c/10%10*3+c%10*4;
	shu+=e/10000*5+e/1000%10*6+e/100%10*7+e/10%10*8+e%10*9;
	if((sum+num+shu)%11==g)
	cout<<"Right";
	else 
	cout<<a<<b<<c<<d<<e<<f<<(sum+num+shu)%11;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
