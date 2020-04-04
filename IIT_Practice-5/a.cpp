#include<bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n, m;
        cin >> n >> m;
        vector <int> V(n) ;
        stack <int> index;
        for (int i = 0; i < n; i++)
        {
            cin >> V[i];
            if(V[i] == m)
                index.push(i);
        }

        int maximum = 0;
        while (!index.empty())
        {
            int sum = m;
            int i = index.top();
            for (int j = i - 1; j >= 0; j--)
            {
                if(V[j] <= m)
                    break;
                sum += V[j];
            }

            for (int j = i+1; j < n; j++)
            {
                if(V[j] <= m)
                    break;
                sum += V[j];
            }
            if (sum > maximum)
                maximum = sum;
            index.pop();
        }

        cout << maximum << endl;
    }
    return 0;
}
