#include <bits/stdc++.h>

using namespace std;

string reverseStr(string str)
{
    int n = str.length();
    for (int i = 0; i < n / 2; i++)
        swap(str[i], str[n - i - 1]);
    return str;
}

bool isPalindrome(string str)
{
    int l = 0;
    int h = str.length()-1;
    bool flag = true;
    while (h > l)
    {
        if (str[l++] != str[h--])
        {
            flag = false;
            return flag;
        }
    }
    return flag;
}

int main(void)
{
    int n,m;
    cin >> n >> m;
    string s[n] = {""};
    for (int i = 0; i < n; i++)
    {
        cin >> s[i];
    }
    string result = "";
    string palindrome = "";
    for (int i = 0; i < n; i++)
    {
        string r = reverseStr(s[i]);
        int counter = 0;
        //cout << s[i] << endl;
        if (s[i] == "#1b")
            continue;
        for (int j = i+1; j < n; j++)
        {
            if (r == s[j])
            {
                counter++;
                s[j] = "#1b";
            }
        }
        if (isPalindrome(s[i]))
        {
            palindrome = s[i];
            //cout << s[i] << endl;
        }

        if (counter > 0){
            result += s[i];
            counter = (counter - 1)/2;
            while(counter--)
                result += s[i];
        }

    }

    string pal2 = reverseStr(result);
    result += palindrome;
    result += pal2;

    cout << result.length() << endl << result << endl;

    return 0;
}
