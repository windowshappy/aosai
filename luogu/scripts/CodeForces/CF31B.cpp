#include <bits/stdc++.h>

using namespace std;

int main() {
    string a;
    cin >> a;
    if (a[0] == '@' || a[a.size()-1] == '@' || a.find('@') == -1) {
        cout << "No solution";
        return 0;
    }
    for (int i = 1; i < a.length() - 1; ++i) {
        if (a[i] == '@' && a[i + 1] == '@') {
            cout << "No solution";
            return 0;
        }
    }
    for (int i = 1; i < a.length() - 2; ++i) {
        if (a[i] == '@' && a[i + 2] == '@') {
            cout << "No solution";
            return 0;
        }
    }

    int last = -1;
    for (;;) {
        if (a.find('@', last + 1) != -1)
            last = a.find('@', last + 1);
        else
            break;
    }

    for (int i = 0; i < a.length(); i++) {
        if (a[i - 2] == '@') {
            if (last != i - 2)
                cout << ",";
        }
        cout << a[i];
    }

    return 0;
}
