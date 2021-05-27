#include <cstdio>
#include <iostream>
#include <cstring>
using namespace std;
int main ()
{
	freopen ("cowmult.in","r",stdin);
	freopen ("cowmult.out","w",stdout);
	
	string a,b;
	cin >> a >> b;
	int n1 = a.size();
	int n2 = b.size();
	int i ,j ,sum = 0;

	for (i = 0; i < n1; i++)
	{
		for (j = 0; j < n2; j++)
		{
			sum += (a[i] - 48) * (b[j] - 48);
		}
	}
	cout << sum;
	
	fclose(stdin);
	fclose(stdout);
	return 0;
}
