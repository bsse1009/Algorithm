#include <bits/stdc++.h>

using namespace std;
vector <char> adj [100];

int main (void)
{
    int test;
    cin >> test;
    while(test--)
    {
        char s[100] = {'0'};
        cin >> s;

        set<char> myset (s,s+100);
        set<char>::iterator it;
        for (it=myset.begin(); it != myset.end(); ++it)
        {
            char u = *it;
            char v = (*it+1);
            adj[u].push_back(v);
            adj [v].push_back(u);
        }

        char u;
        cin >> u;
        for (int i = 0; i < adj[u].size(); i++)
        {
            cout << adj [u][i] << endl;
        }

    }


    return 0;
}
