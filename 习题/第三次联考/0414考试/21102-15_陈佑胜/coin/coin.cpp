#include<cstdio>
#include<iostream>
using namespace std;
int sum,k,m=1,chance=1;
int main()
{
	freopen("coin.in","r",stdin);
	freopen("coin.out","w",stdout);
	scanf("%d",&k);
	for(int i=1;i<=k;i++){
		if(chance>1){
			sum+=m;
			chance--;
		}
		else{
		    sum+=m;
			m++;
			chance=m;
		}
	}
	cout<<sum;
	fclose(stdin);
	fclose(stdout);
	return 0;
}
