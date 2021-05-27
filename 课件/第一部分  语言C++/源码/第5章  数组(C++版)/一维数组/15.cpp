#include<iostream>
#include<cstdio>

using namespace std;

int main(){
//	freopen("12.in", "r", stdin);
//	freopen("12.out", "w", stdout);
	
	int n,t,t1,temp=1,l[10000],max = -34;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>t;
		l[i]=t;
	}
	t1 = l[0]-1;
	for(int i=0;i<n;i++){
		if(max<temp) max = temp;
		if(t1==l[i]) temp++;
		else temp=1;
		t1 = l[i];
	}
	cout<<max;
	
	return 0;
}

