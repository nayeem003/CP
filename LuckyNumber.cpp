#include <bits/stdc++.h>
using namespace std;

bool islucky(int n)
{
    while (n > 0)
    {
        if (n % 10 != 7 && n % 10 != 4)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    int n;
    cin >> n;

    bool ans = false;

    for (int i = 1; i <= n; i++)
    {
        if (n % i == 0 && islucky(i))
        {
            ans = true;
        }
    }
    if (ans)
        cout << "YES\n";
    else
        cout << "NO\n";
    return 0;
}