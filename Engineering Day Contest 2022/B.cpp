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
        long long S, Sum = 0;
        cin >> N >> S;
        int A[N];
        for (int i = 0; i < N; i++)
        {
            cin >> A[i];
        }
        int Count = 0;
        int Max = INT_MIN;
        for (int i = 0; i < N; i++)
        {
            Sum += A[i];
            if (Sum <= S)
            {
                Count++;
            }
            else
            {
                Max = max(Max, Count);
                Count = 0;
                Sum = 0;
            }
        }
        cout << Max << endl;
    }
    return 0;
}