#include<iostream>
#include<cstdio>
using namespace std;

int main(){
	
	freopen("triangle.in","r",stdin);
	freopen("triangle.out","w",stdout);
	
	int n;
	scanf("%d",&n);
	
	int tot=0;
	for(int i=1;i<=n;i++)
	{
		for(int j=1;j<=i;j++)
		{
			tot++;
			if(tot>9) tot=0;
			cout<<tot;
		}
		if(i<n)
		cout<<endl;
	}
	
	return 0;
	
}
