#include <iostream>
#include <string>
#include <cstdio>
#include <cmath>

using namespace std;

string int2string(int a){
	if(a==0) return "0";
	string ans;
	int tt = a;
	char tmp;
	while(tt>0){
		tmp = tt%10;
		ans = char(tmp+48)+ans;
		tt/=10;
	}
	return ans;
}

int main()
{
	// freopen("P1042_2.in", "r", stdin);
	// freopen("P1042.out", "w", stdout);
	string a;
	int w_11 = 0, l_11 = 0, w_21 = 0, l_21 = 0;
	bool isEnd = false;
	string t_21;
	while(getline(cin, a)){
		for (int i = 0; i < a.size(); ++i)
		{
			if(a[i] == 'E'){ 
				isEnd = true;
			}
			if(a[i] == 'W'){
				w_11 ++;
				w_21++;
			}else if(a[i] == 'L'){
				l_21 ++;
				l_11++;
			}
			if (((w_11 >= 11 || l_11 >= 11 ) && (abs(w_11 - l_11) >=2))|| isEnd)
			{
				cout<<w_11<<":"<<l_11<<endl;
				w_11 =0;
				l_11 = 0;
			}
			if(((w_21 >= 21 || l_21 >= 21)  && (abs(w_21 - l_21) >=2))|| isEnd){
				t_21 += int2string(w_21) + ':' + int2string(l_21) + '\n';
				w_21 =0;
				l_21 = 0;
			}
			if(isEnd){
				break;
			}
		}
		if(isEnd){
			break;
		}
	}
	cout<<endl<<t_21;
	return 0;
}
