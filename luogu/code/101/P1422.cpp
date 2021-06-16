#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	double d,y;
	cin>>d;
	if(d<=150) y=d*0.4463;
	else if(d<=400) y=150*0.4463+(d-150)*0.4663;
	else y = 150*0.4463+250*0.4663+(d-400)*0.5663;
	printf("%.1lf",y);
	return 0;
}
