#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	double h,i=0;
	double allh=0,currh,temp=0;
	cin>>h;
	temp=h;
	while(i<9){
		
		temp/=2.0;
		allh+=temp*2.0;
		i++;
	}
	temp/=2.0;
	cout<<allh+h<<endl<<temp;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

