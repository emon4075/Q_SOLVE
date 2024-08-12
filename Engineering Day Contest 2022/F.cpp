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
        int N;
        cin >> N;
        vector<int> V(N);
        long long Sum = 0;
        long long Mini = LONG_LONG_MAX;
        for (int i = 0; i < N; i++)
        {
            cin >> V[i];
        }
        int Iterrable = *max_element(V.begin(), V.end());
        for (int i = 1; i <= Iterrable; i++)
        {
            for (int j = 0; j < N; j++)
            {
                Sum += abs(V[j] - i);
            }
            Mini = min(Mini, Sum);
            Sum = 0;
        }
        cout << Mini << endl;
    }
    return 0;
}