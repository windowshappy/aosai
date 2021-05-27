#include<bits/stdc++.h>

using namespace std;
int t = 1; 

void add(){
	t++;
	if(t>=10){
		t=0;
	}
}

int main(){
	freopen("triangle.in", "r", stdin);
	freopen("triangle.out", "w", stdout);
	int n;
	cin>>n;
	for(int i=1;i<=n;i++){
		for(int j=0;j<i;j++){
			cout<<t;
			add();
		}
		cout<<endl;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
