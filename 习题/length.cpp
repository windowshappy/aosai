#include<iostream>
#include<cstdio>

using namespace std;

int main(){
	freopen("length.in","r",stdin);
	freopen("length.out","w",stdout);
	int n,a,l=1,t=-7777,max=0;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>a;
		
		if(a-1==t){
			l+=1;
		}
		else l=1;
		
		if(max<l)max=l;
		t=a;
	}
	cout<<max;
	fclose(stdin);
	fclose(stdout);
	return 0;
}

