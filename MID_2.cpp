#include <bits/stdc++.h>
#include <array>
#include <utility>
#include <numeric>
#ifdef ONLINE_JUDGE
#include <bits/stdc++.h>
#endif
using namespace std;

#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
#define translow(x) transform((x).begin(), (x).end(), (x).begin(), ::tolower)
#define sz(n) (int)(n).size()
#define FOR(i, a, b) for (int i = a; i < (b); i++)
#define max_in_arr(a) *max_element(a.begin(), a.end());
#define PI 2 * acos(0)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define maxint 2147483647
#define maxll 9223372036854775807
#define EL cout << endl

typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll, ll>> vll;
typedef pair<ll, ll> pll;

void solve()
{
    /// https://vjudge.net/contest/592005#problem/A
    int n, m = 0, p = -1, p2=-1, cnt = 0;
    cin >> n;
    n++;

    vi a(n + 1, 0);

    FOR(i, 1, n)
    cin >> a[i];

    if (n == 1)
    {
        cout << a[1] << endl;
        return;
    }

    FOR(i, 1, n)
    if (a[i] != i)
    {
        p = i;
        break;
    }

    FOR(i, p+1, n)
    if (a[i] == p)
    {
        p2 = i;
        break;
    }
    // cout<<p<<" "<<p2<<endl;
    while (p < p2)
    {
        swap(a[p], a[p2]);
        p++;
        p2--;
        if (p >= p2)
            break;
    }

    cout << a[1];
    FOR(i, 2, n)
    cout << " " << a[i];
    EL;

    return;
}

int main()
{
    long long T = 1;
    // cout<<"Test Case: "<<endl;
    cin >> T;
    while (T--)
        solve();

    return 0;
}