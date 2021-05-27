#include<iostream> 
#include<cstdio> 
#include<string> 

using namespace std;

int main(){
	int q, t , t1,t2;
	string text , tmp;
	cin>>q>>text;
	for(int i=0;i<q;i++){
		cin>>t;
		if(t==1){
			cin>>tmp;
			text += tmp;
			cout<<text;
		}
		else if(t==2){
			cin>>t1>>t2;
			text = text.substr(t1, t2);
			cout<<text;
		}
		else if (t==3)
		{
			cin>>t1>>tmp;
			text = text.insert(t1, tmp);
			cout<<text;
		}
		else if (t==4)
		{
			cin>>tmp;
			int ttt = text.find(tmp, 0) >=0? text.find(tmp, 0) : -1;
			cout<<ttt;
		}
		cout<<endl;
	}
}
