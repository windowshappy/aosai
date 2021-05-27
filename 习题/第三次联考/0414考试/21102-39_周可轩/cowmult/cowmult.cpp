#include<iostream>
#include<cstdio>
#include<string>
using namespace std;
int l1[100000000],l2[100000000];
int main(){
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
	int a,b;
	int c1=0,c2=0;
	int e1=0,e2=0;
	int summ=0;
	cin>>a>>b;
	while(a!=0){
		int ge=a%10;
		l1[c1]=ge;c1++;
		a=a/10;
		e1++;
	}
	while(b!=0){
		int ge2=b%10;
		l2[c2]=ge2;c2++;
		b=b/10;
		e2++;
	}
	int mm=max(e1,e2);
	int xx=min(e1,e2);
	for (int i=0;i<mm;++i){
		for (int j=0;j<xx;++j){
			summ+=l1[i]*l2[j];
		}
	}
	cout<<summ;
	fclose(stdin);fclose(stdout);
	return 0;
}
