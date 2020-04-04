#include <bits/stdc++.h>

using namespace  std;

vector <long long> vec;

int main ()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        long long b;
        cin >> b;
        vec.push_back(b);
    }
    sort(vec.begin(), vec.end());
    for (int i = n-1; i >= 0; i--)
        cout << vec[i] << " ";
    cout << endl;
    vec.clear();

}
