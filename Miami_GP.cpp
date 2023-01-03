#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        float a;
        a = x * 1.07;

        if (a >= y)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }
    return 0;
}
