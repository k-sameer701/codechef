#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x;
        cin >> x;
        int arr[x];
        for (int i = 0; i < x; i++)
        {
            cin >> arr[i];
        }
        int i = 0;
        int c = 0;
        while (i < x)
        {
            if (i == 0)
            {
                if (arr[i] != arr[i + 1])
                    c++;
            }
            else if (i == x - 1)
            {
                if (arr[i] != arr[i - 1])
                    c++;
            }
            else
            {
                if (arr[i] != arr[i + 1] || arr[i] != arr[i - 1])
                    c++;
            }
            i++;
        }
        cout << c << endl;
    }
    return 0;
}