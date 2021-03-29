#include<iostream>
#include<cstdio>
#include<cmath>

using namespace std;

int main()
{
	freopen("reverse.in","r",stdin);
	freopen("reverse.out","w",stdout);
	int N;
	cin>>N;
	if(N<0) cout<<"-";
	N=abs(N);
	int ge=N%10;
	int shi=N%100/10;
	int bai=N%1000/100;
	int qian=N/1000;
	if(ge==0&&shi==0&&bai==0) 
	{
		cout<<qian;
		return 0;
	}
	if(ge==0&&shi==0) 
	{
		cout<<bai<<qian;
		return 0;
	}
	if(ge==0) 
	{
		cout<<shi<<bai<<qian;
		return 0;
	}
	else 
	{
		cout<<ge<<shi<<bai<<qian;
		return 0;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
