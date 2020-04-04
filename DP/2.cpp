#include <bits/stdc++.h>

using namespace std;

long long arr[2000000];

int main (void)
{
    int test;
    cin >> test;
    while(test--)
    {
        long long k = 0;
        long long mini = 10000000000;
        long long maxi = 0;
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        if ((arr[0] != -1) && (arr[1] == -1))
        {
            //cout << arr[0] << " ";
            if (arr[0] < mini)
                mini = arr[0];
            if (arr[0] > maxi)
                maxi = arr[0];
        }

        if ((arr[n-1] != -1) && (arr[n-2] == -1))
        {
            //cout << arr[n-1] << " ";
            if (arr[n-1] < mini)
                mini = arr[n-1];
            if (arr[n-1] > maxi)
                maxi = arr[n-1];
        }

        for (int i = 1; i < n-1; i++)
        {
            if (arr[i] != -1){
                if ((arr[i-1] == -1) || (arr[i+1] == -1))
                {
                    //cout << arr[i] << " ";
                    if (arr[i] < mini)
                        mini = arr[i];
                    if (arr[i] > maxi)
                        maxi = arr[i];
                }
            }
        }
        if (maxi == 0)
        {
            cout << 0 << " " << 0 << endl;
            continue;
        }
        k = (maxi+mini)/2;
        //cout << maxi << mini << " " << k << endl;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] == -1){
                arr[i] = k;
            }

        }

        int maxDiff = 0;
        for (int i = 0; i < n-1; i++)
        {
            int diff = abs(arr[i]-arr[i+1]);
            if (diff > maxDiff)
                maxDiff = diff;
        }

        cout << maxDiff << " "  << k << endl;

    }

}

