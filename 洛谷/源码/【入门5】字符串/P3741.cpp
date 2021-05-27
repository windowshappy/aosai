#include<bits/stdc++.h>

using namespace std;

int main(){
	int a,sum=0;
	bool is = 0;
	string b;
	cin>>a>>b;
	if(a==1){
		cout<<0;
		return 0;
	}
	for(int i=0;i<a-1;i++){
		if(b[i] == 'V'&&b[i+1] == 'K') {
			sum++;
			b[i] = 'v';b[i+1] = 'k';
		}
//		if(b[i] == 'V' && b[i+1] == 'V' && !is){
//			sum++;
//			i++;
//			is=true;
//		}
//		if(b[i] == 'K' && b[i+1] == 'K' && !is){
//			sum++;
//			i++;
//			is=true;
//		}
	}
	for(int i=0;i<a-1;i++)
          if (b[i+1]==b[i]) {sum++;cout<<sum;return 0;}
	cout<<sum;
}
