#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>

using namespace std;

bool h(string s){
	string t("00000000");
	int j = 0;
	for(int i=s.length()-1;i>=0;i--){
		t[j++] = s[i];
	}
	if(t==s){
		return 1;
	}
	else return 0;
}

int string2int(string s){
	int ans = 0, j=0;
	for(int i=s.length()-1;i>=0;i--){
		ans+=j==0? int(s[i]-'0'):int(s[i]-'0')*pow(10, j);
		j++;
	}
	return ans;
}

string int2string(int s){
	string ans;
	int t = s;
	while(t){
		ans=char(t%10+'0')+ans;
		t/=10;
	}
	
	return ans;
}

bool run(int x){
	if(x%400==0) return 1;
	if(x%100!=0&&x%4==0) return 1;
	return 0;
}

int main(){
	freopen("date.in", "r", stdin);
	freopen("date.out", "w", stdout);
	string date1,date2;
	int d1,d2, aaa=0;
	cin>>date1>>date2;
	d1 = string2int(date1);
	d2 = string2int(date2);
	if(date1==date2){
		cout<<h(date1);
	}
	else{
		for(int i=d1;i<=d2;i++){
			string t = int2string(i);
			string t1("00");
			t1[0] = t[4];
			t1[1] = t[5];
			string t2("00");
			t2[0] = t[6];
			t2[1] = t[7];
			if(t1=="01"){
				if(t2>"31") {
					t[5] = '2';	
					t[6] = '0';
					t[7] = '1';
					
				}
			}
				
				
			if(t1=="02"){
				if(run(i/10000)){
					if(t2>"29") {
						t[5] = '3';
						
					t[6] = '0';
					t[7] = '1';
					}
				}
				else{
					if(t2>"28") {
						t[5] = '3';
					t[6] = '0';
					t[7] = '1';
					}
				}
			}
				
			if(t1=="03"){
				if(t2>"31") {
					t[5] = '4';
					t[6] = '0';
					t[7] = '1';
				}
			}
		
				
			if(t1=="04"){
				if(t2>"30"){
					t[5] = '5';
					t[6] = '0';
					t[7] = '1';
				}
			}
			
				
			if(t1=="05"){
				if(t2>"31") {
					t[5] = '6';
					t[6] = '0';
					t[7] = '1';
				}
			}
				
				
			if(t1=="06"){
				if(t2>"30") {
					t[5] = '7';
					t[6] = '0';
					t[7] = '1';
				}
			}
				
				
			if(t1=="07"){
				if(t2>"31"){
					t[5] = '8';
					
					t[6] = '0';
					t[7] = '1';
				} 
			}
				
				
			if(t1=="08"){
				if(t2>"31"){
					t[5] = '9';	
					t[6] = '0';
					t[7] = '1';
				} 
			}
				
				
			if(t1=="09"){
				if(t2>"30"){
					t[5] = '0';
					t[4] = '1';
					t[6] = '0';
					t[7] = '1';
				}
			} 
				
			if(t1=="10"){
				if(t2>"31"){
					t[5] = '1';
					t[4] = '1';
					t[6] = '0';
					t[7] = '1';
				}
			} 
				
			if(t1=="11"){
				if(t2>"30"){
					t[5] = '2';
					t[4] = '1';
					t[6] = '0';
					t[7] = '1';
				}
			}
				
				
			if(t1=="12"){
				if(t2>"31"){
					int tttt = i;
					tttt+=10000;
					t = int2string(tttt);
					t[5] = '1';
					t[4] = '0';
					t[6] = '0';
					t[7] = '1';
				}
			}
			i = string2int(t);
//			cout<<t<<endl;
			if(i>d2) break;
			if(h(t)) aaa++;
		}
		cout<<aaa;
	}
	fclose(stdin);
	fclose(stdout);
	return 0;
}
