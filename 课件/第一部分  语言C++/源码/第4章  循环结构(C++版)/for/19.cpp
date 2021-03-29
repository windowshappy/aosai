#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,z,a,b,c,d,temp=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>z;
		a = z/1000;
		b = z/100%10;
		c = z/10%100%10;
		d = z-a*1000-b*100-c*10;
		if((d-a-b-c)>0){
			temp ++;
		}
	}
	cout<<temp;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

