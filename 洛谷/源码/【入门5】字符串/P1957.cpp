#include<iostream> 
#include<cstdio> 
#include<cstring>
#include<cmath>

using namespace std;

string t,b,c;
char a;
int n;

string int2string(int a){
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

int string2int(string a){
	int ans;
	string tt = a;
	int tmp;
	int i = a.size();
	for(int j=0;j<tt.size();j++)
    {
        ans*=10;
        ans+=(tt[j]-'0');
    }

	return ans;
}


string suan(string a, int b,int c){
	int ttt;
	string ans;
	char aaa;
	switch(a[0]){
		case 'a':
			ttt = b+c;
			aaa = '+';
			break;
		case 'b':
			ttt = b-c;
			aaa = '-';
			break;
		case 'c':
			ttt = b*c;
			aaa = '*';
			break;
	}
	cout<<ttt<<endl<<b<<" "<<c<<endl;
//	int tt = ttt;
//	char tmp;
//	while(tt>0){
//		tmp = tt%10;
//		ans = ans + char(tmp+48);
//		tt/=10;
//	}
	ans = int2string(b) +aaa+int2string(c)+'='+int2string(ttt);
	return ans;
}



int main(){
	freopen("P1957.in", "r", stdin);
	cin>>n;
	string ccc,t1;
	int a1,a2;
	for(int i=0;i<n;i++){
		cin>>ccc;
		if(ccc[0] >= 'a' && ccc[0] <='z'){
			cin>>a1>>a2;
			t = suan(ccc,a1,a2);
			t1 = ccc;
		}
		else{
			cin>>a2;
			a1 = string2int(ccc);
			t = suan(t1,a1,a2);
		}
		cout<<t<<endl<<t.size()<<endl;
	}
}
