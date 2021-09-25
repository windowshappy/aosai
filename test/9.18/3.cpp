#include<iostream>
#include<string>
using namespace std;

int main()
{
    string map= "2223334445556667778889999";
    string tel;
    int i;
    cin>>tel;
    for(i=0;i<tel.length();i++)
       if((tel[i]>='0') && (tel[i]<='9') )
           cout<<tel[i];
       else if( (tel[i]>='A') && (tel[i]<='Z'))
           cout<<map[tel[i]-'A'];
    cout<<endl;
    return 0;
}