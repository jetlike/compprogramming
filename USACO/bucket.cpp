#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("buckets.in", "r", stdin);
    freopen("buckets.out", "w", stdout);

    int bX = 0, bY = 0, rX = 0, rY = 0, lX = 0, lY = 0;
    
    string line;
    for (int y = 0; y < 10; y++)
    {
        cin >> line;
        for (int x = 0; x < 10; x++)
        {
            if (line[x] == 'B')
                bX = x, bY = y;
            if (line[x] == 'R')
                rX = x, rY = y;
            if (line[x] == 'L')
                lX = x, lY = y;
        }
    }

    int cows = abs(bX - lX) + abs(bY - lY) - 1;
    if ((rX == bX && rX == lX) && ((lY < rY && rY < bY) || (bY < rY && rY < lY)))
        cows += 2;
    else if ((rY == bY && rY == lY) && ((lX < rX && rX < bX) || (bX < rX && rX < lX)))
        cows += 2;
    cout << cows;
}