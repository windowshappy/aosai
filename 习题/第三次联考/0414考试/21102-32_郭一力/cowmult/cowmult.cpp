#include<iostream>
#include<cstdio>
using namespace std;
int a[12],b[12];
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int x,y,i=1,j=1;
	cin>>x>>y;
	while(x%10!=0){
		a[i]=x%10;
		x/=10;
		i++;
	}
	while(y%10!=0){
		b[j]=y%10;
		y/=10;
		j++;
	}
	int sum=0;
	for(int m=1;m<=i;m++){
		for(int n=1;n<=j;n++){
			sum=sum+a[m]*b[n];
		}
	}
	cout<<sum;
	fclose(stdin);fclose(stdout);
	return 0;
}
