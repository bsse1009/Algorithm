#include <bits/stdc++.h>

using namespace std;

bool searchIndex (int x, int *pos, int p)
{
    for (int  i=0; i < p; i++)
    {
        if (pos[i] == x)
            return true;
    }
    return false;
}

int main (void)
{
    int tc;
    cin >> tc;
    while(tc--)
    {
        int m,p;
        cin >> m >> p;
        int arr [m];
        int position [p];
        for (int i = 0; i < m; i++)
        {
            cin >> arr [i];
        }

        for (int i = 0; i < p; i++)
        {
            cin >> position [i];
        }

        int i, j;
        bool flag = false;
        for (i = 0; i < m-1; i++)
        {
            for (j = 0; j < m-i-1; j++)
            {

                if (arr[j] > arr[j+1])
                {
                    if(searchIndex(j+1,position,p))
                        swap(arr[j], arr[j+1]);
                    else
                    {
                        cout << "NO" << endl;
                        //return 0;
                        flag = true;
                        break;
                    }

                }
            }
            if(flag)
                break;

        }
        if(!flag)
            cout << "YES" << endl;
    }

}
