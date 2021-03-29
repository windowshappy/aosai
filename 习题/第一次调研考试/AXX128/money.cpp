#include<iostream>
#include<cstdio>

using namespace std;
int main(){
	freopen("money.in", "r", stdin);	
	freopen("money.out", "w", stdout);
	int d;
	double m;
	cin>>d;
	if(d<=150) m=d*0.4463;
	else if(d>150&&d<=400) m=150*0.4463+(d-150)*0.4663;
	else m=150*0.4463+250*0.4663+(d-400)*0.5663;
	printf("%.1lf",m);
	fclose(stdin);	
	fclose(stdout);
	return 0;	
	
}
