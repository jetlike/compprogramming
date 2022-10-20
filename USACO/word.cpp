#include <bits/stdc++.h>

using namespace std;

int main()
{
    cin.tie(0)->sync_with_stdio(0);
    freopen("word.in", "r", stdin);
    freopen("word.out", "w", stdout);

    int n, k;
    cin >> n >> k;

    string word;
    int linelen = 0;
    for (int i = 0; i < n; i++)
    {
        cin >> word;
        linelen += word.length();
        if (linelen <= k)
        {
            if (i != 0)
                cout << " ";
            cout << word;
        }
        else 
        {
            cout << "\n" << word;
            linelen = word.length();
        }
    }

    return 0;
}