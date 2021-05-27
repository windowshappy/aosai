#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;

int main(){
	
	freopen("colour.in","r",stdin);
	freopen("colour.out","w",stdout);
	
	int n,m;
	scanf("%d%d",&n,&m);
	int tot=pow(4,n);

	for(int i=1;i<=m;i++)
	{
		int a,b;
		scanf("%d%d",&a,&b);
		
		tot-=pow(2,n-1);
	}
	
	cout<<tot;
	
	return 0;
	
}

//a a a
//1 1 1
//1 1 2
//1 2 1
//1 2 2
//2 1 1
//2 1 2
//2 2 1
//2 2 2


// a   a
//   a
// a   a

//a a a a 
//1 1 1 1
//1 1 1 2
//1 1 1 3
//1 1 1 4
//1 1 2 1
//1 1 2 2
//1 1 2 3
//1 1 2 4
//1 1 3 1
//1 1 3 2
//1 1 3 3
//1 1 3 4
//1 1 4 1
//1 1 4 2
//1 1 4 3
//1 1 4 4
//1 2 

