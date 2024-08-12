#include <bits/stdc++.h>
#define endl '\n'
using namespace std;
void FASTIO()
{
    ios::sync_with_stdio(false);
    cin.tie(NULL);
}
int main()
{
    FASTIO();
    int T;
    cin >> T;
    while (T--)
    {
        int E, C;
        cin >> E >> C;
        if (E > C)
        {
            cout << "EEE" << endl;
        }
        else if (C > E)
        {
            cout << "CSE" << endl;
        }
        else
        {
            cout << "Engineering Day 2022!" << endl;
        }
    }
    return 0;
}