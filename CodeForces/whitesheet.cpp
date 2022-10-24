#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    double x1, y1, x2, y2, x3, y3, x4, y4, x5, y5, x6, y6;
    cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4 >> x5 >> y5 >> x6 >> y6;

    double iR1 = ((max(min(x2, x4) - max(x1, x3), 0.0)) / 5) * ((max(min(y2, y4) - max(y1, y3), 0.0)) / 5);
    double iR2 = ((max(min(x2, x6) - max(x1, x5), 0.0)) / 5) * ((max(min(y2, y6) - max(y1, y5), 0.0)) / 5);
    double iRs = ((max(min(x4, x6) - max(x3, x5), 0.0)) / 5) * ((max(min(y4, y6) - max(y3, y5), 0.0)) / 5);
    double total = ((x2 - x1) / 5) * ((y2 - y1) / 5);
    cout << total << " ";
    total -= (iR1 + iR2) - iRs;
    cout << total << " " << iR1 << " " << iR2 << " " << iRs;
    cout << ((total > 0) ? "YES" : "NO"); 
}