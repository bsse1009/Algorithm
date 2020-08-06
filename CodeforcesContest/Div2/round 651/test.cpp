#include <bits/stdc++.h>

using namespace std;

int main(void)
{
    stack<char>st;
    string s;
    cin >> s;
    for(int i=0; i < s.length(); i++)
    {
        if(s[i] == '(' || s[i] == '{' || s[i] == '['){
             st.push(s[i]);
           }
        else if (st.empty()){
            cout << "invalid" << endl;
            return 0;
        }
        else{
            char temp = st.top();
            st.pop();
            if(temp != '(' && temp != s[i]-2){
                cout << "invalid" << endl;
                return 0;
            }
            if (temp == '(' && s[i] != ')'){
                cout << "invalid" << endl;
                return 0;
            }
        }
    }
    if(st.empty()) cout << "valid\n";
    else cout << "invalid\n";
    return 0;
}
