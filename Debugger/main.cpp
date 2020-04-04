#include <bits/stdc++.h>

using namespace std;

int arr [5][3];

void addElement(int x)
{
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
            arr[i][j] += x;
    }
}

int sumElement()
{
    int sum = 0;
    for (int i = 0; i < 5; i++)
    {
        for (int j = 0; j < 3; j++)
            sum += arr[i][j];
    }

    return sum;
}

int main (void)
{
    addElement(10);
    addElement(1);
    addElement(111);
    cout << sumElement() << endl;
}
