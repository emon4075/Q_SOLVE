// Issue Ase
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
        double X = pow(10, 18);
        X = (long long)X;
        list<long long> L2;
        for (long long i = 0; i <= X; i++)
        {
            L2.push_back(i);
        }
        int N;
        cin >> N;
        list<long long> L1;
        for (int i = 0; i < N; i++)
        {
            long long Y;
            cin >> Y;
            L1.push_back(Y);
            L2.remove(Y);
        }
        cout << *max_element(L2.begin(), L2.end()) << endl;
    }
    return 0;
}