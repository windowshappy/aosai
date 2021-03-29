#include<iostream>
#include<cstdio>

using namespace std;

int main()
{
	freopen("math.in","r",stdin);
	freopen("math.out","w",stdout);
	int N;
	long long S=0;
	cin>>N;
	int a=1;
	long long b=1;
	while(a<=N)
	{
		for(int i=1;i<=a;i++)
		{
			b*=i;
		}
		S+=b;
		a++;
		b=1;
	}
	cout<<S;
	fclose(stdin);fclose(stdout);
	return 0;
}
