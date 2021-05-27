#include<iostream>
#include<cstdio> //¼òµ¥ÊýÑ§
using namespace std;
int main()
{
	freopen("board.in","r",stdin);
	freopen("board.out","w",stdout);
	int n,m;
	cin>>n>>m;
	cout<<(n%m)*(n%m);
	fclose(stdin); fclose(stdout);
	return 0;
}
