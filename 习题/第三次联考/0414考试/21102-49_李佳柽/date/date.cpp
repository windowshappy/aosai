#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	freopen("date.in","r",stdin);
	freopen("date.out","w",stdout);
	string m,n;cin>>m>>n;
	if(m[0]==m[7]&&m[1]==m[6]&&m[2]==m[5]&&m[3]==m[4]){
	    cout<<1;	
	}else{
		cout<<0;
	}
	
	
	fclose(stdin);fclose(stdout);
	return 0;
}
