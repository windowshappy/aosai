#include<iostream>
#include<cmath>
#include<cstdio>
#include<cstdlib>

using namespace std;

int main(){
	//freopen(".in", "r", stdin);
	//freopen(".out", "w", stdout);
	char f;
	int a,b,c;
	bool shi;
	cin>>a>>b>>f>>c;
	shi = c;
	for(int i=0;i<a;i++){
		for(int j=0;j<b;j++){
			if(shi) cout<<f;
			else{
				if(i==0) cout<<f;
				else if(i==a-1) cout<<f;
				else {
					if(j==0) cout<<f;
					else if(j==b-1) cout<<f;
					else cout<<" ";
				}
			}
		}
		cout<<endl;
	}
	//fclose(stdin);
	//fclose(stdout);
	return 0;
}

