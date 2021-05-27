#include <iostream>
#include <cmath>

using namespace std;

double Distance(double x1,double y1, double x2, double y2){
	return sqrt(abs((x1 - x2) * (x1 - x2)) + abs((y1 - y2) * (y1 - y2)));
}

int main()
{
	int n;
	double r, t[111][3], l;
	cin>>n>>r;
	for (int i = 0; i < n; ++i)
	{
		cin>>t[i][0]>>t[i][1];
	}

	
	return 0;
}