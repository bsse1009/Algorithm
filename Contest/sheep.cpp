#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,m;
    cin >> n >> m;
    char arr [n][m];
    for(int i = 0; i < n; i++)
    {
            cin >> arr[i];
    }
    bool flag = true;
    bool wolf = false;

    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
           if (arr [i][j] == 'W')
           {
               wolf = true;
               if(arr[i-1][j] == '.' && i > 0)
               {
                   arr[i-1][j] = 'D';
               }

               else if(arr[i-1][j]=='S' && i>0)
               {
                   flag=false;
                   break;
               }

                if(arr[i+1][j] == '.' && i+1 < n)
               {
                    arr[i+1][j] = 'D';
               }

               else if(arr[i+1][j]=='S' && i+1<n)
               {
                   flag=false;
                   break;
               }


                if(arr[i][j-1] == '.' && j > 0)
               {
                    arr[i][j-1] = 'D';
               }

               else if(arr[i][j-1]=='S' && j>0)
               {
                   flag=false;
                   break;
               }

                if(arr[i][j+1] == '.' && j+1 < m)
               {
                   arr[i][j+1] = 'D';
               }

               else if(arr[i][j+1]=='S' && j+1<m)
               {
                   flag=false;
                   break;
               }
           }

        }
    }


    if (flag )
    {
        cout << "Yes" << endl;
        for(int i = 0; i < n; i++)
        {
            for (int j = 0; j < m; j++)
            {
            cout << arr[i][j];
            }
        cout << endl;
        }

    }
    else
        cout << "No" << endl;


    return 0;
}
