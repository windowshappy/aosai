#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	double k,s=0,n=1;
	cin>>k;
	bool isFinished=false; 
	while(!isFinished){
		for(double i=1;i<=n;i++){
			s+=1/i;
		}
		
		if(s>k) isFinished = true;
		n++;
		s=0;
	}
	cout<<n-1;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

