#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int n,time_count = 0;
    cin >> n;
    int publications[n];
    int time[n];
    for (int i = 0; i < n; i++)
        cin >> publications[i];

    for (int i = 0; i < n; i++)
        cin >> time[i];

    for (int i = 0; i < n-1; i++)
    {
        for (int j = i+1; j < n; j++)
        {
            if(publications[i] == publications[j])
            {
                if (time[i] < time[j])
                {
                    publications[i]++;
                    time_count += time[i];

                }
                else{
                    publications[j]++;
                    time_count += time[j];
                }
                j = i;
                //cout << j << endl;
            }
        }
    }
    cout << time_count << endl;

    return 0;
}
