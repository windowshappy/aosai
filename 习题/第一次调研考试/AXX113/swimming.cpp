#include<cstdio>
#include<iostream>
#include<cmath>
using namespace std;
int main(){
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
    int a,b,c,d,e,f;
    cin>>a>>b>>c>>d;
    
    if(b>d){
	    e=c-a-1;
    	f=abs(60-(b-d));
    	cout<<e<<" "<<f;
    }
    if(b<d){
    	e=c-a;
    	f=d-b;
    	cout<<e<<" "<<f;
    }
	fclose(stdin); fclose(stdout);
	return 0;
} 
