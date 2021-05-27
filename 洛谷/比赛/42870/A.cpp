#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
	double DPS;
	int RGM, Damage;
	cin>>RGM>>Damage;
	DPS = 1.0 * RGM *Damage /60.0;
	if (DPS>=180)
	{
		printf("%.2lf\n", DPS);
		printf("Good");
	}
	else{
		printf("%.2lf\n", DPS);
		printf("Bad");
	}
	return 0;
}