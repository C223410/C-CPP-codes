#include <bits/stdc++.h>
#include <array>
#include <utility>
#include <numeric>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define rsort(x) sort((x).rbegin(), (x).rend())
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
#define translow(x) transform((x).begin(), (x).end(), (x).begin(), ::tolower)
#define sz(n) (int)(n).size()
#define FOR(i, a, b) for (ll i = a; i < (b); i++)
#define max_in_arr(a) *max_element(a.begin(), a.end());
#define min_in_arr(vec) min_element(vec.begin(), vec.end());
#define PI 2 * acos(0)
#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define YESR                   \
    {                          \
        cout << "YES" << endl; \
        return;                \
    }
#define NOR                   \
    {                         \
        cout << "NO" << endl; \
        return;               \
    }
#define YesR                   \
    {                          \
        cout << "Yes" << endl; \
        return;                \
    }
#define NoR                   \
    {                         \
        cout << "No" << endl; \
        return;               \
    }
#define maxint INT_MAX
#define maxll 9223372036854775807
#define EL cout << endl
#define ELR       \
    cout << endl; \
    return
#define GCD __gcd
#define mp make_pair
#define EPS 1e-12
#define pdd pair<double, double>

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
ll mod = 1000000007;

int cnt = 0;

vi div(vi x)
{
    int l = sz(x), p = x[0];

    if (l <= 1)
        return x;

    vi a, b;

    FOR(i, 1, l)
    if (x[i] <= p)
        a.pb(x[i]);
    else
        b.pb(x[i]);

    // if(sz(a)>0)
    // FOR(i,0,sz(a))cout<<a[i]<<" ";
    // EL;

    // cout<<p<<endl;
    // if(sz(b)>0)
    // FOR(i,0,sz(b))cout<<b[i]<<" ";
    // EL;

    if (!a.empty())
        a = div(a);

    if (!b.empty())
        b = div(b);

    l = sz(b);
    a.pb(p);

    FOR(i, 0, l)
    a.pb(b[i]);
    x = a;
    // cout<<sz(x)<<endl;
    return x;
}

void solve()
{
    int n;
    cout << "Size of vector:" << endl;
    cin >> n;
    vi a(n);

    cout << "your vector:";
    FOR(i, 0, n)
    cin >> a[i];

    a = div(a);

    cout << "Sorted Vector: ";
    FOR(i, 0, n)
    cout << a[i] << " ";
    EL;
    // cout << "Inverse Count: " << cnt;
    ELR;
}

int main()
{
    ll T = 1;
    // cin >> T;
    while (T--)
        solve();

    return 0;
}
