#include <bits/stdc++.h>

using namespace std;

int arr[10050];

int main (void)
{
  int n;
  cin >> n;
  for(int i = 1; i <= 105; i++)
  {
    for(int j = 1; j <= 105; j++)
    {
      for(int k = 1; k <= 105; k++)
      {
        int com = (i*i+j*j + k*k + i*j+j*k+k*i);
        if(com < 10050)
        arr[com]++;
      }
    }
  }
   for(int i = 1; i <= n; i++)
     cout << arr[i] << endl;
}
