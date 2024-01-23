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
 
vi conq(vi a, vi b)
{
    vi x;
    int l1 = sz(a), l2 = sz(b), i = 0, j = 0;
 
    while (i < l1 && j < l2)
        if (a[i] <= b[j])
            x.pb(a[i]), i++;
        else
            x.pb(b[j]), j++;
 
    while (i < l1)
        x.pb(a[i]), i++;
 
    while (j < l2)
        x.pb(b[j]), j++;
 
    return x;
}
 
vi div(vi x)
{
    int l = sz(x);
    if (l <= 1)
        return x;
 
    vi a, b;
 
    FOR(i, 0, l / 2)
    a.pb(x[i]);
 
    FOR(j, l / 2, l)
    b.pb(x[j]);
 
    return conq(div(a), div(b));
}
 
void solve()
{
    int n;
    cin >> n;
    vi a(n);
 
    FOR(i, 0, n)
    cin >> a[i];
 
    a = div(a);
 
    FOR(i, 0, n)
    cout << a[i] << " ";
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
