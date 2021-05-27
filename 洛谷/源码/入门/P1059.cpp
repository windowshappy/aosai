#include<bits/stdc++.h>

using namespace std;

int main(){
	int n,l[111];
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>l[i];
	}
	sort(l,l+n);
	int tmp = -10, tl[111], j=0, tn = n;
	for(int i=0;i<n;i++){
		if(tmp != l[i]){
			tmp = l[i];
			tl[j] = l[i];
			j++;
			
		}
		else{
			tn--;
		}
	}
	cout<<tn<<endl;
	for(int i=0;i<tn;i++){
		cout<<tl[i]<<" ";
	}
}
