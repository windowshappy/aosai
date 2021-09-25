#include<bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    long long a, b, c;
    cin>>a>>b>>c;
    if(a*a>b*c){
        cout << "Alice";
    }
    else{
        cout << "Bob";
    }

    return 0;
}
