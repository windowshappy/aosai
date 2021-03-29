#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("score.in","r",stdin);
	freopen("score.out","w",stdout);
    int a,b,c,z;
    cin>>a>>b>>c;
    z=a*0.2+b*0.3+c*0.5;
    cout<<z;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
