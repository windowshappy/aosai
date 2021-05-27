#include<iostream>
#include<cstdio>
using namespace std;

int l,s,e;
int i;
int ans=0;
bool a[10100];

int main()
{
	freopen("tree.in","r",stdin);
	freopen("tree.out","w",stdout);
	
	cin>>l;

	cin>>s>>e; //区间标记
	for(i=s;i<=e;i++)
	a[i]=1;

	//这两个重复的代码可以用函数代替
	cin>>s>>e;
	for(i=s;i<=e;i++)
	a[i]=1;

	for(i=0;i<=l;i++)//注意是从0开始
	 if(a[i]==0)
	  ++ans;
	cout<<ans;
	fclose(stdin); fclose(stdout);
	return 0;
}
