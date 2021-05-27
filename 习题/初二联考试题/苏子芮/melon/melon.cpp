#include<bits/stdc++.h>

using namespace std;

int t[11111] = {0};

int main(){
	freopen("melon.in", "r", stdin);
	freopen("melon.out", "w", stdout);
	int n,tmp,max = -11;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>tmp;t[tmp]++;
		if(max<tmp) max=tmp;
	}
	for(int i=1;;i++){
		while(t[i]>1){
			t[i]-=2;
			t[i+1]++;
		}
		if(t[i+1]<2){
			if(t[i+1]>0)
				max = i+1;
			else
				max = i;
			break;
		}
	}
	cout<<max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
