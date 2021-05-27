#include<bits/stdc++.h>

using namespace std;

int main(){
	freopen("eat.in", "r", stdin);
	freopen("eat.out", "w", stdout);
	int n,m,a[20010],b, t=0;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
	for(int i=0;i<n;i++){
		cin>>b;
		for(int j=0;j<m;j++){
			if(a[j]>b) t++;
		}
	}
	cout<<t;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
