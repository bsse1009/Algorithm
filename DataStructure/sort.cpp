#include <bits/stdc++.h>

using namespace std;

struct Point{

    int x,y;
}point [100];

bool operator< (Point A, Point B)
{
    if(A.x != B.x) return A.x < B.x;
    return A.y < B.y;
}

int main ()
{
    for (int i = 0; i < 5; i++)
    {
        int a,b;
        cin >> a >> b;
        point[i].x = a;
        point[i].y = b;
    }
    sort (point, point+5);
    for(int i = 0; i < 5; i++)
    {
        cout << "(" << point[i].x << "," << point[i].y << ")" << endl;
    }
}
