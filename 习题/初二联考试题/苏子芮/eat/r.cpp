#include<bits/stdc++.h>

using namespace std;

int main(){

	int n,m,a[20010],b, t=0;
	cin>>m>>n;
	for(int i=0;i<m;i++){
		cin>>a[i];
	}
  sort(a,a+m);
	for(int i=0;i<n;i++){
		cin>>b;
		for(int j=m-1;j>=0;j--){
			if(a[j]>b) t++;
      else break;
		}
	}
	cout<<t;
	return 0;
}
