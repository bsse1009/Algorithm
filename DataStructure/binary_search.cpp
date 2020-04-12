#include <bits/stdc++.h>

using namespace std;

typedef long long ll;

ll arr[100];
ll n;

int Binary_Search(int x,int ok)
{
    int low = 0, high = n-1;
    int result = -1;
    while(low <= high)
    {
        int mid = (low+high)/2;
        if (arr[mid] == x){
            result = mid;
            if(!ok) low = mid+1; // last appear
            if(ok) high = mid-1; // first appear
        }
        else if (arr[mid] < x) low = mid +1;
        else high = mid - 1;
    }
    return result;
}

int main (void)
{
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    ll k;
    cin >> k;
    int first_index = Binary_Search(k,1);
    int last_index = Binary_Search(k,0);

    if(first_index == -1) cout << k << " is not found!\n";
    else cout << k << " found in position "<< first_index << " to " << last_index << endl;

    return 0;
}
