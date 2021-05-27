#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	freopen("swimming.in","r",stdin);
	freopen("swimming.out","w",stdout);
	int sa,sb,ea,eb;
	cin>>sa>>sb>>ea>>eb;
	if(eb-sb>=0){
		 cout<<ea-sa<<" "<<eb-sb<<endl;
	}
	else{
		cout<<ea-sa-1<<" "<<60+(eb-sb)<<endl;
	}
	fclose(stdin);fclose(stdout);
	return 0;
}
