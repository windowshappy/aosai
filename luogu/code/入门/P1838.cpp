#include<bits/stdc++.h>

using namespace std;

void iswin();
int q[11];
int main(){
	string a;
	cin>>a;
	
	memset(q,0,sizeof(q));
	for(int i=0;i<a.length();i++){
		if(i%2==0){
			q[a[i]-'0'] = 1;
		}
		else{
			q[a[i]-'0'] = 2;
		}
	}
	iswin();
}

void iswin(){
	if(q[1] == q[2]&& q[2] == q[3]&& q[1] !=0){
		if(q[1] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[1] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[4] == q[5]&& q[5] == q[6]&& q[4] !=0){
		if(q[4] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[4] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[7] == q[8]&& q[8] == q[9]&& q[7] !=0){
		if(q[7] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[7] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[1] == q[4]&& q[4] == q[7]&& q[1] !=0){
		if(q[1] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[1] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[2] == q[5]&& q[8] == q[5]&& q[2] !=0){
		if(q[2] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[2] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[3] == q[6]&& q[6] == q[9]&& q[3] !=0){
		if(q[3] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[3] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[1] == q[5]&& q[5] == q[9]&& q[1] !=0){
		if(q[1] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[1] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else if(q[3] == q[5]&& q[5] == q[7]&& q[3] !=0){
		if(q[3] == 1){
			cout<<"xiaoa wins.";
			return;
		}if(q[3] == 2){
			cout<<"uim wins.";
			return;
		}
	}
	else{
		cout<<"drew.";
		return;
	}
}
