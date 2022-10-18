#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int a, b, c;
    cin >> a >> b >> c;
    int price = 0;
    for (int i = 1; i <= c; i++)
        price += (i*a);
    
    cout << (price > b ? price - b : 0);
}