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
    priority_queue <Point> pq;
    for (int i = 0; i < 5; i++)
    {
        int a,b;
        cin >> a >> b;
        point[i].x = a;
        point[i].y = b;
        pq.push(point[i]);
    }

    for(int i = 0; i < 5; i++)
    {
        cout << pq.top().x << "," << pq.top().y<< endl;
        pq.pop();
    }

}
