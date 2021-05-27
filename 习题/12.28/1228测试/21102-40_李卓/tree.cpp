#include<iostream>
#include<cstdio>
using namespace std;
int l,a[10005],b,c,sum;
int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	cin>>l;
	for(int i=1;i<=2;++i){
		cin>>b>>c;
		if(b>c)swap(b,c);
		for(int j=b;j<=c;++j){
			a[j]=1;
		}
	}
	for(int i=0;i<=l;++i){
		if(a[i]==0){
			++sum;
		}
	}
	cout<<sum<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
