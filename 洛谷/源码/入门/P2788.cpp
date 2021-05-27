#include <bits/stdc++.h>

using namespace std;

int main() {
        int a,b,ans = 0;
        char c;
        cin>>a;
        ans = a;
        while (cin>>c) {
                cin>>b;
                switch (c) {
                case '+':
                        ans+=b;
                        break;
                case '-':
                        ans-=b;
                        break;
                }
        }
        cout<<ans;
        return 0;
}
