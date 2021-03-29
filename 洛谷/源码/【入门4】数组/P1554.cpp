#include<bits/stdc++.h>
using namespace std;
int main(){
	
	long long c[11],m,n,t;
	cin>>m>>n;
	int j=1;
	memset(c,0,sizeof(c));
	for(long long i=m;i<=n;i++,j++){
		t=i;
		while(t!=0){
			if(t%10==0)c[0]++;
			if(t%10==1)c[1]++;
			if(t%10==2)c[2]++;
			if(t%10==3)c[3]++;
			if(t%10==4)c[4]++;
			if(t%10==5)c[5]++;
			if(t%10==6)c[6]++;
			if(t%10==7)c[7]++;
			if(t%10==8)c[8]++;
			if(t%10==9)c[9]++;
			t/=10;
		}
	}
	for(int i=0;i<=9;i++){
		cout<<c[i];
		if(i!=9) cout<<" ";
	}
	return 0;
}
