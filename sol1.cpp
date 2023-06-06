#include <bits/stdc++.h>
using namespace std;
int main()
{
    bool flag = 0;
    int n, t;
    cin >> t;
    while (t--)
    {
        cin >> n;
        while (n != 0)
        {
            if (n % 10 == 7)
            {
                flag = true;
                break;
            }
            else
                n = n / 10;
        }
        if (flag)
            cout << "yes";
        else
            cout << "no";
    }

    return 0;
}
