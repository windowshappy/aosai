#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main(){
//	freopen("13.in", "r", stdin);
//	freopen("13.out", "w", stdout);
	
	int n;
	double t,num=0,w=-2342424,l[300],max=-4444444.000,min=5335454.000,mii,mai;
	
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		if(t>max) max = t;
		if(t<min) min = t;
		l[i]=t;
	}
	
	for(int i=0;i<n;i++){
		if(l[i]==max) {
			l[i]=0;
			mai=i;
		}
		if(l[i]==min){
			l[i]=0;
			mii = i;
		}
	}
	
	for(int i=0;i<n;i++){
		num += l[i];
	}
	num/=(double)(n-2);
	
	for(int i=0;i<n;i++){
		if(i==mai||i==mii);
		else
		if(w<abs(l[i]-num)) w = abs(l[i]-num);
	}
	printf("%.2lf %.2lf",num,w);
	return 0;
}

