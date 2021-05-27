#include<iostream>
#include<cstdio>
int a[10002];
using namespace std;
int main(){
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l;
	int tail,head;
	int ji=0;
	cin>>l;
	for(int j=0;j<=10002;j++){
		a[j]=0;
	}
	for(int i=0;i<=l;i++){
		a[i]=1;
	}
	for(int i=1;i<=2;i++){
		cin>>head>>tail;
		for(int j=head;j<=tail;j++){
			if(a[j]==1){
				a[j]=0;
				ji++;
			}
			
		}
	}
	cout<<l-ji+1;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
