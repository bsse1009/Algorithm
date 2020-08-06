#include<bits/stdc++.h>

using namespace std;

int arr[305][305];
int n,m;

bool corner(int i, int j)
{
    if(i == 0 && j == 0) return true;
    if(i == 0 && j == m-1 ) return true;
    if(i == n-1 && j == m-1 ) return true;
    if(i == n-1 && j == 0 ) return true;
    return false;
}

bool inBorder(int i, int j)
{
    if (i == 0 || j == 0 || i == n-1 || j == m-1) return true;
    return false;
}

int main(void)
{
    int t;
    cin >> t;
    while(t--)
    {
        cin >> n >> m;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
                cin >> arr[i][j];
        }
        bool flag = true;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < m; j++)
            {
                if(corner(i,j)){
                    if(arr[i][j] > 2){
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                    arr[i][j] = 2;
                }
                else if(inBorder(i,j))
                {
                    if(arr[i][j] > 3){
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                    arr[i][j] = 3;
                }
                else{
                    if(arr[i][j] > 4){
                        cout << "NO\n";
                        flag = false;
                        break;
                    }
                    arr[i][j] = 4;
                }
            }
            if(!flag) break;
        }

        if(flag)
        {
            cout << "YES\n";
            for(int i = 0; i < n; i++)
            {
                for(int j = 0; j < m; j++)
                    cout << arr[i][j] << " ";
                cout << endl;
            }
        }

    }
    return 0;
}
