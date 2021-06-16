#include<bits/stdc++.h>
using namespace std;
int main(){
	int n,l[11][11],t,h=1,num = 1;
	cin>>n;
	t = ceil(1.0 * n / 2);
	for(int i=0;i<t;i++){
		for(int j=i;j<n-i;j++) l[i][j] = num++;
		for(int j=i+1;j<n-i-1;j++) l[j][n-i-1] = num++;
		for(int j=n-i-1;j>i;j--) l[n-i-1][j] = num++;
		for(int j=n-i-1;j>i;j--) l[j][i] = num++;

	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			printf("%3d",l[i][j]);
		}
		cout<<endl;
	}
}
