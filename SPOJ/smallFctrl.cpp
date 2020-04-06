#include <bits/stdc++.h>
#include <string>

using namespace std;

string multiply(string num1, string num2)
{
    int len1 = num1.size();
    int len2 = num2.size();
    if (len1 == 0 || len2 == 0)
        return "0";

    vector<int> result(len1 + len2, 0);

    int i_n1 = 0;
    int i_n2 = 0;

    for (int i=len1-1; i>=0; i--)
    {
        int carry = 0;
        int n1 = num1[i] - '0';
        i_n2 = 0;
        for (int j=len2-1; j>=0; j--)
        {
            int n2 = num2[j] - '0';
            int sum = n1*n2 + result[i_n1 + i_n2] + carry;
            carry = sum/10;
            result[i_n1 + i_n2] = sum % 10;
            i_n2++;
        }

        if (carry > 0) result[i_n1 + i_n2] += carry;

        i_n1++;
    }
    int i = result.size() - 1;

    while (i>=0 && result[i] == 0) i--;

    if (i == -1) return "0";

    string s = "";

    while (i >= 0)
    {
        ostringstream str1;
        str1 << result[i--];
        s += str1.str();
    }

    return s;
}


string factorial (int n)
{
    ostringstream str1;
    str1 << n;
    string n1 = str1.str();
    string ans = n1;
    while(--n)
    {
        ostringstream str2;
        str2 << n;
        n1 = str2.str();
        ans = multiply(ans,n1);
        //cout << ans << endl;
    }
    return ans;
}

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        cin >> n;
        cout << factorial(n) << endl;
    }
    return 0;
}
