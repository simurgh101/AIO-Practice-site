#include <bits/stdc++.h>

using namespace std;

#define MEM(a, b) memset(a, (b), sizeof(a))
#define FOR(i, n) for (int i = 0; i < n; i++)
#define RFOR(i, n) (int i = 0; i >= n; i--)
#define all(cont) cont.begin(), cont.end()
#define rall(cont) cont.end(), cont.begin()
#define EACH(it, l) for (auto it = l.begin(); it != l.end(); it++)
#define IN(A, B, C) assert(B <= A && A <= C)
#define MP make_pair
#define PB push_back
#define INF (int)1e9
#define EPS 1e-9
#define PI 3.1415926535897932384626433832795
#define MOD 1000000007
#define read(type) readInt<type>()
#define print(t) cout << t << endl
#define LL long long
#define vt vector
#define fast()                        \
    ios_base::sync_with_stdio(false); \
    cin.tie(0)

const int amax = 100;

int main()
{
    fast();
    /*
    freopen(".txt", "r", stdin);
    freopen(".txt", "w", stdout);
*/
    int n;
    cin >> n;
    map<int, int> m;
    FOR(i, n)
    {
        int x, y;
        cin >> x >> y;
        m[x]++;
        m[y]++;
    }
    int maxl = 0;
    for (auto it : m)
    {
        int l = it.second;
        maxl = max(maxl, l);
    }
    for (auto it : m)
    {
        if (it.second == maxl)
        {
            print(it.first);
        }
    }
}