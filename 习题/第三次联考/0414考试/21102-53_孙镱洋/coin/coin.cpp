#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	int n,js=0,ans=0;
	cin>>n;
	int a=1;
	while(ans!=n){
		for(int i=1;i<=a;i++){
			js+=a;
			ans++;
			if(ans==n){
				cout<<js;
				return 0;
			}
		}
		a++;
	}
	cout<<js;
	fclose(stdin);fclose(stdout);
	return 0;
}
