#include <bits/stdc++.h>

using namespace std;

int main()
{
	string a;
	cin>>a;
	int a1,a2,a3,a4,a5,a6,a7,a8;
	a1=a2=a3=a4=a5=a6=a7=a8=0;
	for (int i = 0; i < a.size(); ++i)
	{
		if(a[i]=='1'||a[i]=='Q'||a[i]=='A'||a[i]=='Z') a1++;
		if(a[i]=='2'||a[i]=='W'||a[i]=='S'||a[i]=='X') a2++;
		if(a[i]=='3'||a[i]=='E'||a[i]=='D'||a[i]=='C') a3++;
		if(a[i]=='4'||a[i]=='R'||a[i]=='F'||a[i]=='V'||a[i]=='5'||a[i]=='T'||a[i]=='G'||a[i]=='B')a4++;
		if(a[i]=='6'||a[i]=='Y'||a[i]=='H'||a[i]=='N'||a[i]=='7'||a[i]=='U'||a[i]=='J'||a[i]=='M')a5++;
		if(a[i]=='8'||a[i]=='I'||a[i]=='K'||a[i]==',')a6++;
		if(a[i]=='9'||a[i]=='O'||a[i]=='L'||a[i]=='.')a7++;
		if(a[i]=='0'||a[i]=='P'||a[i]==';'||a[i]=='/'||a[i]=='-'||a[i]=='='||a[i]=='['||a[i]==']'||a[i]=='\'')a8++;
	}
	cout<<a1<<endl<<a2<<endl<<a3<<endl<<a4<<endl<<a5<<endl<<a6<<endl<<a7<<endl<<a8<<endl;
	return 0;
}