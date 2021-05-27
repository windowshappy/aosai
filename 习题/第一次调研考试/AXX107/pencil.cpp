#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("pencil.in","r",stdin);
	freopen("pencil.out","w",stdout);
	int n,pa,pb,pc,na,nb,nc;
	cin>>n>>na>>pa>>nb>>pb>>nc>>pc;
	cout<<min(min(((n+na-1)/na)*pa,((n+nb-1)/nb)*pb),((n+nc-1)/nc)*pc);
	fclose(stdin);
	fclose(stdout);
	return 0;
}
