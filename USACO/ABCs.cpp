#include <bits/stdc++.h>

using namespace std;

int a, b, c;

int main()
{
    cin.tie(0)->sync_with_stdio(0);

    int givenNums[7];
    for (int i = 0; i < 7; i++)
        cin >> givenNums[i];
    
    sort(givenNums, givenNums + 7);
    a = givenNums[0], b = givenNums[1];
    c = givenNums[6] - (a + b);
    
    cout << a << " " << b << " " << c;
}