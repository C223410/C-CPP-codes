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
    /// https://vjudge.net/contest/592005#problem/B
    int n, m, c = 0, sum = 0;
    cin >> n >> m;
    char a[n][m];

    FOR(i, 0, n)
    FOR(j, 0, m)
    cin >> a[i][j];

    FOR(i, 0, m)
    {
        int num, h = 0;
        vi ans(5,0);
        cin >> num;

        FOR(j, 0, n)
        ans[a[j][i] - 'A']++;

        // FOR(i, 0, 5)
        // cout << ans[i]<<" ";
        // EL;

        FOR(i, 0, 5)
        if (ans[i] > h)
            h = ans[i];
        // cout << h << " ";
        sum += (h * num);
    }

    cout << sum << endl;
    return;
}

int main()
{
    long long T = 1;
    // cout<<"Test Case: "<<endl;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}