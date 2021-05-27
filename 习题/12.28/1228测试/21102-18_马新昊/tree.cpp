#include<iostream>
#include<cstdio>
using namespace std;
int k[10001];
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	int l,a1,a2,b1,b2,s=0;
	cin>>l;
	cin>>a1>>a2;
	cin>>b1>>b2;
	for(int i=0;i<=l;i++){
		k[i]=0;
	}
	for(int i=a1;i<=a2;i++){
			k[i]=1;
	}
	for(int i=b1;i<=b2;i++){
			k[i]=1;
	}
	for(int i=0;i<=l;i++){
		if(k[i]==0){
			s++;
		}
	}
	cout<<s;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
