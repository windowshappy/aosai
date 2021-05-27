#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("isbn.in","r",stdin);
	freopen("isbn.out","w",stdout);
    char x,a,b,c,d,e,f,g,h,i,z;
    cin>>x>>a>>b>>c>>d>>e>>f>>g>>h>>i;
    z=int((x*1+a*2+b*3+c*4+d*5+e*6+f*7+g*8+h*9)%11);
    if(z=i)
    cout<<"Right";
    else if(z!=i){
    cout<<x<<"-"<<a<<b<<c<<"-"<<d<<e<<f<<g<<h<<"-"<<z;
}
    fclose(stdin);
	fclose(stdout);
	return 0;
}
