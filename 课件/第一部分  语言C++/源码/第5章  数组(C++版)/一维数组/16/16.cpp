#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	freopen("16.in", "r", stdin);
//	freopen("16.out", "w", stdout);
	int t=0,l[20000],n,n1,n2=0;
	cin>>n;
	for(int i=1;i<=n;i++){
		cin>>n1;
//		if(t==n1){
//			n2++;
//			n--;
//		}
//		else
		l[i]=n1;
//		t=n1;
	}
//	n-=n2;
	t=0;
	for(int i=1;i<=n;i++){
		for(int j=++i;j<=n;j++){
			if(i==j);
			else
			if(l[i]==l[j]){
//				for(int x=j;x<=n;x++){
//					l[x] = l[x+1];
//				}
				l[j]=0;
//				n2++;
//				n--;
			}
		}
		t = l[i];
	}
//	n-=n2;
	bool first = true;
	for(int i=1;i<=n;i++){
		if(l[i]==0);
		else{
			if(first){
				cout<<l[i];
				first=false;
			}
			else
			cout<<" "<<l[i];
		}
		
	}
	fclose(stdin);
//	fclose(stdout);
	return 0;
}

