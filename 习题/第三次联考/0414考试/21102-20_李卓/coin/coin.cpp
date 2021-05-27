#include<iostream>
#include<cstdio>
using namespace std;
int day,s,t;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	cin>>day;
	for(int i=1;t<day;++i){
		for(int j=1;j<=i&&t<day;++j){
			s+=i;++t;//cout<<s<<endl;
		}
	}
	cout<<s<<endl;
	fclose(stdin);fclose(stdout);
	return 0;
}
