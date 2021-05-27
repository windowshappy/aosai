#include <iostream>

using namespace std;

char r[1000][21];

int main()
{
	int w,h, target[2];
	cin>>w>>>h;
	for (int i = 0; i < w; ++i)
	{
		for (int j = 0; j < h; ++j)
		{
			cin>>r[i][j];
			if (r[i][j] == '@')
			{
				target[0] = i;
				target[1] = j;
			}
		}
	}
	return 0;
}