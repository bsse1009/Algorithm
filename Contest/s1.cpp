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

    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            if (arr [i] [j] == '.')
                arr [i][j] = 'D';

        }
    }
   // bool flag = false;
    for (int i = 0; i < n; i++ )
    {
        for (int j = 0; j < m; j++)
        {
            if (arr [i] [j] == 'W')
            {
                if (i > 0 && j > 0  && i < n-1 && j < m-1)
                {
                    if (arr [i-1][j] == 'S' || arr [i+1][j] == 'S' || arr [i][j-1] == 'S' || arr [i][j+1] == 'S')
                    {
                        cout << "No" << endl;
                        return 0;
                    }

                }
                if (i > 0 && j == 0 && i < n-1)
                {
                    if (arr [i-1][j] == 'S' || arr [i+1][j] == 'S' || arr [i][j+1] == 'S')
                    {
                        cout << "No" << endl;
                        return 0;
                    }

                }
                if (i == 0 && j > 0 && j < m-1)
                {
                    if ( arr [i+1][j] == 'S' || arr [i][j+1] == 'S' || arr [i][j-1] == 'S'  )
                    {
                        cout << "No" << endl;
                        return 0;
                    }

                }


                if (i== 0 && j == 0){
                    if (arr [i+1][j] == 'S' || arr [i][j+1] == 'S')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }
                if (i == n-1 && j == m-1)
                {
                    if ( arr [i-1][j] == 'S' || arr [i][j-1] == 'S'  )
                    {
                        cout << "No" << endl;
                        return 0;
                    }

                }
                if (i == n-1 && j < m-1 && j > 0)
                {
                    if ( arr [i-1][j] == 'S' || arr [i][j+1] == 'S' || arr [i][j-1] == 'S'  )
                    {
                        cout << "No" << endl;
                        return 0;
                    }

                }

                if (i < n-1 && j == m-1 && i > 0)
                {
                    if ( arr [i-1][j] == 'S' || arr [i][j-1] == 'S' || arr [i+1][j] == 'S'  )
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }

                if (i == n-1 && j == 0)
                {
                    if ( arr [i-1][j] == 'S' || arr [i][j+1] == 'S')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }

                if (i == 0 && j == m-1)
                {
                    if ( arr [i+1][j] == 'S' || arr [i][j-1] == 'S')
                    {
                        cout << "No" << endl;
                        return 0;
                    }
                }

            }

        }
    }

    cout << "Yes" << endl;
    for(int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
            cout << arr[i][j];
        cout << endl;
    }


    return 0;
}
