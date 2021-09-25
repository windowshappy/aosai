#include <bits/stdc++.h>

using namespace std;

bool o[100005];
int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        memset(o, 0, sizeof(o));
        string s;
        cin >> s;
        stack<int> st;
        for (size_t i = 0; i < s.size(); i++)
        {
            if (s[i] == ')')
            {
                if (st.empty())
                {
                    continue;
                }
                if(s[st.top()] == '['){
                    st.pop();
                }
                if (s[st.top()] == '(')
                {
                    o[i] = o[st.top()] = true;
                    st.pop();
                }
            }
            else if (s[i] == ']')
            {
                if (st.empty())
                {
                    continue;
                }
                if(s[st.top()] == '('){
                    st.pop();
                }
                if (s[st.top()] == '[')
                {
                    o[i] = o[st.top()] = true;
                    st.pop();
                }
                
            }
            else
            {
                st.push(i);
            }
        }
        for (int i = 0; i < s.size(); i++)
        {
            if (o[i])
                cout << s[i];
            else
            {
                if (s[i] == '(' || s[i] == ')')
                    cout << "()";
                else
                    cout << "[]";
            }
        }
    }

    return 0;
}