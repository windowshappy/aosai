#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int n,i,j;
	cin>>n>>i>>j;
	for(int x=1;x<=n;x++){
		printf("(%d,%d)",i,x);
	}
	cout<<endl;
	for(int x=1;x<=n;x++){
		printf("(%d,%d)",x,j);
	}
	cout>>endl;
	
	for(int x=1;x<=n;x++){
		printf("(%d,%d)",i,x);
	}

	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

