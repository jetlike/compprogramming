#include <bits/stdc++.h>

using namespace std;

int main()
{ 
    cin.tie(0)->sync_with_stdio(0);
    freopen("teleport.in", "r", stdin);
    freopen("teleport.out", "w", stdout);

    int a, b, x, y;
    cin >> a >> b >> x >> y;
    int tPath = abs(min(a, b) - min(x, y)) + abs(max(a, b) - max(x, y));

    cout << (tPath > abs(a - b) ? abs(a - b) : tPath);
}