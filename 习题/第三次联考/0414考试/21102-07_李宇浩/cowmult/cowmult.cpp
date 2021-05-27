#include<iostream>
#include<cstdio>
#include<cstring>
using namespace std;
int main()
{
	freopen("cowmult.in","r",stdin);
	freopen("cowmult.out","w",stdout);
    char a[100001],b[100001];
    cin>>a>>b;
    int sum=0;
    for(int i=0;i<strlen(a);i++)
    {
    	for(int j=0;j<strlen(b);j++)
    	{
    		sum+=(a[i]-'0')*(b[j]-'0');
    	}
    }
    cout<<sum;
	fclose(stdin);
	fclose(stdout);
    return 0;
}
