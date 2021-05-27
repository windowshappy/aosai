#include <iostream>
#include <string>

using namespace std;
int t = 1;
bool run(int y){
	if(y%400==0)return true;
	else if(y%100!=0 && y%4==0) return true;
	return false;
}

void day(){
	t++;
	if (t>7)
	{
		t = 1;
	}
}

int week(int m,int y){
	if(m == 4 || m==6 || m==11|| m == 9)  return 30;
	else if(m==2) return run(y) + 28;
	else return 31;
}

int weekday[8] = {};

int main()
{
	int n;
	cin>>n;
	for (int i = 1900; i <= 1900+n-1; ++i)
	{
		for (int j = 1; j <= 12; ++j)
		{
			int ttt = week(j ,i);
			for (int x = 1; x <= ttt; ++x)
			{
				if(x == 13){
					weekday[t] ++;
				}
				day();
				
				
				
			}
		}
	}
	cout<<weekday[6]<<" ";
	cout<<weekday[7]<<" ";
	cout<<weekday[1]<<" ";
	cout<<weekday[2]<<" ";
	cout<<weekday[3]<<" ";
	cout<<weekday[4]<<" ";
	cout<<weekday[5];

	return 0;
}