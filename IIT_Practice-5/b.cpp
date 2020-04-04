#include<bits/stdc++.h>

using namespace std;

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int n;
        double W, L, D, V;
        cin >> n >> W >> L >> D >> V;
        double ball [n][2];
        for (int i = 0; i < n; i++)
        {
            cin >> ball [i][0] >> ball [i][1];
        }

        double Vb = V;
        //cout << V << endl;
        for (int i = 0; i < n; i++)
        {
            Vb += ball[i][1]* (4/3.0)*acos(-1)*pow(ball[i][0],3);
            //cout << (4/3.0)*acos(-1)*pow(ball[i][0],3) << endl;
        }
        //cout << Vb << endl;

        double iD = (Vb/(W*L));
        if (iD > D)
            iD = D;
        cout << fixed << setprecision(3) << iD << endl;

    }
    return 0;
}

