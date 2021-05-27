#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	int m,n,yn,no_p=0;
	cin>>m>>n;
	for(int i=0;i<n;i++){
		cin>>yn;
		m-=yn;
		if(m<0){
			m+=yn;
			no_p++;
		}
	}
	cout<<no_p;
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

