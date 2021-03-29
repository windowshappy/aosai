#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int a,b,c,d,e,f;
	cin>>a>>b>>c>>d;
    if(d>=b)
    {
    	e=c-a;
    	f=d-b;
    	cout<<e<<" "<<f<<endl;
    }
    else{
    	e=c-a-1;
    	f=d+60-b;
    	cout<<e<<" "<<f<<endl;
    }
    fclose(stdin);
    fclose(stdout);
    return 0;
} 
