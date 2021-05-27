#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("cow.in","r",stdin);
	freopen("cow.out","w",stdout);
	int x,n;
	cin>>x>>n;
	int a=1;
	int num=1;
	int b;//Ã¿ÂÖ´«È¾µÄ 
	for(int i=1;i<=n;i++)
	  {
	  	b=a*x;
	  	a+=b;
	  	num+=b;
	  }
	  cout<<num;
	fclose(stdin);fclose(stdout);
	return 0;
}
