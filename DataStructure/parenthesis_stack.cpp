#include <bits/stdc++.h>

using namespace std;

stack<char> st;

int main (void)
{
    string s;
    cin >> s;
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '[')
            st.push(s[i]);
        else if (!st.empty()){
            char top = st.top();
            //cout << top << endl;
            if (top == s[i]-1 || top == s[i]-2)
                st.pop();
            else{
                cout << "This sequence is incorrect\n" ;
                return 0;
            }
        }
        else {
            cout << "This sequence is incorrect\n" ;
            return 0;
        }
    }
    if(st.empty())
        cout << "This sequence is correct\n";
    else
        cout << "This sequence is incorrect\n";
    return 0;
}
