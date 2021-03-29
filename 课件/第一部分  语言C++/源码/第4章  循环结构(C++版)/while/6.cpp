#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int m,k,t,c=1,c3=0;
	cin>>m>>k;
	while(true){
		if(m/c%10==3) c3++;
		c*=10;
		if(m%c==m) break;
	}
	
	if(m%19==0&&c3==k)cout<<"YES";
	else cout<<"NO";
	
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

