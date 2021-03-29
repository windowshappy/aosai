#include<iostream>
#include<string.h>
using namespace std;
int main(){
	string l1, l2, l3, l4, l5;
	int n;char numL[102];
	cin >> n;
	cin>>numL;
	for(int i=0;i<n;i++){
		switch(numL[i]){
			case '0':
				l1+="XXX";
				l2+="X.X";
				l3+="X.X";
				l4+="X.X";
				l5+="XXX";
				break;
			case '1':
				l1+="..X";
				l2+="..X";
				l3+="..X";
				l4+="..X";
				l5+="..X";
				break;
			case '2':
				l1+="XXX";
				l2+="..X";
				l3+="XXX";
				l4+="X..";
				l5+="XXX";
				break;
			case '3':
				l1+="XXX";
				l2+="..X";
				l3+="XXX";
				l4+="..X";
				l5+="XXX";
				break;
			case '4':
				l1+="X.X";
				l2+="X.X";
				l3+="XXX";
				l4+="..X";
				l5+="..X";
				break;
			case '5':
				l1+="XXX";
				l2+="X..";
				l3+="XXX";
				l4+="..X";
				l5+="XXX";
				break;
			case '6':
				l1+="XXX";
				l2+="X..";
				l3+="XXX";
				l4+="X.X";
				l5+="XXX";
				break;
			case '7':
				l1+="XXX";
				l2+="..X";
				l3+="..X";
				l4+="..X";
				l5+="..X";
				break;
			case '8':
				l1+="XXX";
				l2+="X.X";
				l3+="XXX";
				l4+="X.X";
				l5+="XXX";
				break;
			case '9':
				l1+="XXX";
				l2+="X.X";
				l3+="XXX";
				l4+="..X";
				l5+="XXX";
				break;
		}
		if(i!=n-1){
			l1+=".";
			l2+=".";
			l3+=".";
			l4+=".";
			l5+=".";
		}
	}
	cout<<l1<<endl;
	cout<<l2<<endl;
	cout<<l3<<endl;
	cout<<l4<<endl;
	cout<<l5;
}
