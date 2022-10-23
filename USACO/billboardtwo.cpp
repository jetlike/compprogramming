#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> by1 >> bx2 >> by2;

    int ix = max(min(ax2, bx2) - max(ax1, bx1), 0);
    int iy = max(min(ay2, by2) - max(ay1, by1), 0);
    int aArea = abs(ax2 - ax1) * abs(ay2 - ay1);
    
    cout << (((ix == abs(ax2 - ax1) || iy == abs(ay2 - ay1)) && !((bx1 > ax1 && bx1 < ax2 && bx2 > ax1 && bx2 < ax2) || (by1 > ay1 && by1 < ay2 && by2 > ay1 && by2 < ay2))) 
                ? aArea - (iy * ix) : aArea);
}