#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("billboard.in", "r", stdin);
    freopen("billboard.out", "w", stdout);

    int ax1, ay1, ax2, ay2, bx1, by1, bx2, by2, tx1, ty1, tx2, ty2;
    cin >> ax1 >> ay1 >> ax2 >> ay2 >> bx1 >> 
        by1 >> bx2 >> by2 >> tx1 >> ty1 >> tx2 >> ty2;
    
    int total = (ax2 - ax1) * (ay2 - ay1) + (bx2 - bx1) * (by2 - by1);
    int iA = max(min(tx2, ax2) - max(tx1, ax1), 0) * max(min(ty2, ay2) - max(ty1, ay1), 0);  
    int iB = max(min(tx2, bx2) - max(tx1, bx1), 0) * max(min(ty2, by2) - max(ty1, by1), 0);

    cout << total - iA - iB;
}