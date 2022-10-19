#include <bits/stdc++.h>

using namespace std;

int bP, sP, gP;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("promote.in", "r", stdin);
    freopen("promote.out", "w", stdout);

    int bB, bA, sB, sA, gB, gA, pB, pA;
    cin >> bB >> bA >> sB >> sA >> gB >> gA >> pB >> pA;

    gP = pA - pB;
    sP = gA - (gB - gP);
    bP = sA - (sB - sP);

    cout << bP << "\n" << sP << "\n" << gP;
    
}