#include <bits/stdc++.h>

using namespace std;

int main (void)
{
    int hight, width, num_chips;
    cin >> hight >> width >> num_chips;
    string s = "";

    while(num_chips--)
    {
        int fao1,foo2,fao3,fao4;
        cin >> fao1 >> foo2 >> fao3 >> fao4;
    }

    for (int i = 0; i < hight-1; i++) s += "D";
    for (int i = 0; i < width-1; i++) s += "R";
    for (int i = 0; i < hight-1; i++) s += "U";
    for (int i = 0; i < width-1; i++)
    {
        s += "L";
        for (int j = 0; j < hight-1; j++)
        {
            if (i % 2 == 0)
            {
                s += "D";
            }
            else{
                s += "U";
            }
        }
    }
    cout << s.length() << endl;
    cout << s << endl;

    return 0;
}
