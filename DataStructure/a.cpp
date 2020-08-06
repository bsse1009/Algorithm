#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int t;
    cin >> t;
    while(t--)
    {
        double A,B,C;
        cin >> A >> B >> C;
        cout << hex << left << showbase << nouppercase; // formatting
        cout << (long long) A << endl; // actual printed part

        // LINE 2
        cout << dec << right << setw(15) << setfill('_') << showpos << fixed << setprecision(2); // formatting
        cout << B << endl; // actual printed part

        // LINE 3
        cout << scientific << uppercase << noshowpos << setprecision(9); // formatting
        cout << C << endl;
    }
}
