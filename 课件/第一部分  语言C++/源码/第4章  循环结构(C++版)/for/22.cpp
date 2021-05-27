#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int a,b,c,x=2;
	cin>>a>>b>>c;
	while(true){
		if((a%x)==(b%x)&&(b%x)==(c%x)&&(a%x)==(c%x)){
			cout<<x;
			break;
		}
		x++;
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

