#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,list[100],age;
	double a0_18=0,a19_35=0,a36_60=0,a61=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>age;
		list[i]=age;
	}
	for(int i=0;i<n;i++){
		if(list[i]<=18) a0_18++;
		if(list[i]>18&&list[i]<=35) a19_35++;
		if(list[i]>36&&list[i]<=60) a36_60++;
		if(list[i]>60) a61++;
		
	}
	printf("%.2lf%%\n%.2lf%%\n%.2lf%%\n%.2lf%%",
			a0_18/n*100,
			a19_35/n*100,
			a36_60/n*100,
			a61/n*100);
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

