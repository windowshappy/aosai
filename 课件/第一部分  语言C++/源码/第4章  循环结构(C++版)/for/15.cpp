#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,x,y,p,l;
	double m=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>x>>y>>p;
		l = sqrt((double)(x*x+y*y));
		m += l/50*2+p+p*0.5;
	}
	cout<<ceil(m);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

