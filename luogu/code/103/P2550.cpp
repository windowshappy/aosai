#include<bits/stdc++.h> 
using namespace std;
int main()
{
	int zj[8],mj[9999][8],num[8]={0,0,0,0,0,0,0},n,t=0;
	cin>>n;
	cin>>zj[1]>>zj[2]>>zj[3]>>zj[4]>>zj[5]>>zj[6]>>zj[7];
	for(int i=1;i<=n;i++){
		cin>>mj[i][1]>>mj[i][2]>>mj[i][3]>>mj[i][4]>>mj[i][5]>>mj[i][6]>>mj[i][7];
	}
	for(int i=1;i<=n;i++){
		for(int j=1;j<=7;j++){
			for(int x=1;x<=7;x++){
				if(mj[i][j]==zj[x]){
					t++;
					break;
				}
			}
		}
		switch(t){
			case 0:
				break;
			case 1:
				num[7]++;
				break;
			case 2:
				num[6]++;
				break;
			case 3:
				num[5]++;
				break;
			case 4:
				num[4]++;
				break;
			case 5:
				num[3]++;
				break;
			case 6:
				num[2]++;
				break;
			case 7:
				num[1]++;
				break;
			
		}
		t=0;
	}
	bool f=1;
	for(int i=1;i<=7;i++){
		if(f){
			cout<<num[i];
			f=0;
		}
		else cout<<" "<<num[i];
	}
	return 0;
	
}
 
