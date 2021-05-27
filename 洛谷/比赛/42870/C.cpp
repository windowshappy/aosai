#include <bits/stdc++.h>

using namespace std;
short n,tl[200000], start = 0;
bool find(short x, short i){
	sort(tl, tl+n);
	for (int j = start; j < n; ++j)
	{
		if(tl[j] == x && j !=i && tl[j] != -1){
			tl[j] = -1;
			return true;
		}
	}
	return false;
}

bool canfind(){
	sort(tl, tl+n);
	for (int i = start; i < n; ++i)
	{
		if(tl[i] == tl[i-1]&& tl[i] != -1){
			return true;
		}
	}
	return false;
}

int main()
{
	cin>>n;

	for (int i = 0; i < n; ++i)
	{
		cin>>tl[i];
	}

	for (int i = 0; ; ++i)
	{
		if(tl[i] == -1) continue;
		sort(tl, tl+n);
		if (find(tl[i],i))
		{
			tl[i]++;
			start++;
			i = start;
			if (start>n)
			{
				break;
			}
		}
		else if (!canfind())
		{
			break;
		}
	}
	sort(tl, tl+n);
	cout<<tl[n-1];
	return 0;
}