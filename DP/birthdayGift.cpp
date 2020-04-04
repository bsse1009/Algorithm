#include<bits/stdc++.h>

using namespace std;

int arr[100000000];

int main (void)
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int sum = 0, counter = 0;
        for (int i = 1; i < n-1; i++)
        {
            if (arr [i] != -1 && ((arr[i-1] == -1) || (arr[i+1] == -1)))
            {
                sum += arr[i];
                counter++;
            }
        }

        if (arr[0] != -1 && arr[1] == -1)
            sum += arr[0]; counter++;

        if (arr[n-1] != -1 && arr[n-2] == -1)
            sum += arr[n-1]; counter++;

        int k = sum/counter;
        int dist = 0;
        for (int i = 0; i < n-1; i+=2)
        {
            if (arr[i] == -1)
                arr[i] = k;
            if (arr[i+1] == -1)
                arr[i+1] = k;
            int temp = abs(arr[i+1] - arr[i]);
            if (temp > dist)
                dist = temp;

        }

        cout << dist << " " << k << endl;
    }

    return 0;
}
