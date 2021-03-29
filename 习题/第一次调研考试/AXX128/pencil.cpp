#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;
int main(){
	freopen("pencil.in", "r", stdin);	
	freopen("pencil.out", "w", stdout);
	int n,m[4],s,j,min=43553459;
	cin>>n;
	for(int i=0;i<3;i++){
		cin>>s>>j;
		double c = ceil(1.0*n/(double)s);
		m[i] = c*j;
	}
	for(int i=0;i<3;i++){
		if(m[i]<min) min=m[i];
	}
	cout<<min;
	fclose(stdin);	
	fclose(stdout);
	return 0;	
	
}
