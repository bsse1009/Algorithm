#include <bits/stdc++.h>

using namespace std;

long long arr[1000];

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        int counter = 0;
        int n;
        cin >> n;
        for(int i = 0; i < n; i++){
            cin >> arr[i];
            if(((i+1)%2) && (arr[i] <= 0)){
                arr[i] = -(arr[i]);
                counter++;
                continue;
            }
            if(!((i+1)%2) && (arr[i]>=0)) {
                arr[i] = -(arr[i]);
                counter++;
            }
        }
        for(int i = 0; i < n; i++) cout << arr[i] << " ";
        cout << endl;

    }

    return 0;
}
