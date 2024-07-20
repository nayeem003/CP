#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m, h;
        cin >> n >> h >> m;

        int sleep_time = h * 60 + m;
        int ans = 10e7;

        for (int i = 0; i < n; i++)
        {
            int hour_i, min_i;
            cin >> hour_i >> min_i;

            int alarm_time = hour_i * 60 + min_i;

            int diff = alarm_time - sleep_time;
            diff += 1440;
            diff %= 1440;
            // if (diff <0) diff += 1440;

            ans = min(ans, diff);
        }

        cout << ans / 60 << " " << ans % 60 << endl;
    }
    return 0;
}