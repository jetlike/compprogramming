#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("square.in", "r", stdin);
    freopen("square.out", "w", stdout);

    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;

    cout << pow(max(max(ax2, bx2) - min(ax1, bx1), max(ay2, by2) - min(ay1, by1)), 2);
}