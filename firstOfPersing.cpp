#include <bits/stdc++.h>
using namespace std;

#define ff first
#define ss second
#define pb push_back
#define sp " "
#define sl "\n"
#define all(x) (x).begin(), (x).end()
#define rall(x) (x).rbegin(), (x).rend()
#define SORT(a) sort(all(a))
#define RSORT(a) sort(rall(a))
#define rsort(x) sort((x).rbegin(), (x).rend())
#define clr(cnt, x) memset((cnt), (x), sizeof(cnt))
#define translow(x) transform((x).begin(), (x).end(), (x).begin(), ::tolower)
#define sz(n) (int)(n).size()

#define FOR(i, a, b) for (ll i = (a); (a) < (b) ? i < (b) : i > (b); (a) < (b) ? i++ : i--)
#define FORC(a)       \
    for (auto &x : a) \
    cin >> x
#define FORCR(a)                          \
    for (auto i = sz(a) - 1; i >= 0; i--) \
    cin >> a[i]
#define FORO(a)      \
    for (auto x : a) \
    cout << x << sp
#define trav(x, v) for (auto &x : v)

#define max_in_arr(a) *max_element(a.begin(), a.end());
#define min_in_arr(v) min_element(v.begin(), v.end());
#define PI 2 * acos(0)

#define YES cout << "YES" << endl
#define NO cout << "NO" << endl
#define Yes cout << "Yes" << endl
#define No cout << "No" << endl
#define yes cout << "yes" << endl
#define no cout << "no" << endl
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
#define one        \
    {              \
        cout << 1; \
        ELR;       \
    }
#define two        \
    {              \
        cout << 2; \
        ELR;       \
    }
#define zero       \
    {              \
        cout << 0; \
        ELR;       \
    }
#define minus       \
    {               \
        cout << -1; \
        ELR;        \
    }

typedef string str;
typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pair<int, int>> vii;
typedef pair<int, int> pii;
typedef vector<bool> vbl;
typedef vector<pair<ll, ll>> vll;
typedef vector<vector<int>> vvi;
typedef vector<vector<ll>> vvl;
typedef pair<ll, ll> pll;
typedef map<int, int> mii;
typedef map<ll, ll> mll;
ll mod = 1000000007;

// template <typename T>
// pair<T, T> findMinMax(const vector<T> &a)
// {
//     T minVal = a[0], maxVal = a[0];
//     for (const T &x : a)
//     {
//         if (x < minVal)
//             minVal = x;
//         if (x > maxVal)
//             maxVal = x;
//     }
//     return {minVal, maxVal};
// }

// template <class T, class S>
// inline bool chmax(T &a, const S &b) { return (a < b ? a = b, 1 : 0); }

ll binaryToDecimal(const vector<int> &v)
{
    ll decimal = 0, l = sz(v);
    for (int i = l - 1; i >= 0; i--)
        decimal += v[i] * pow(2, l - i - 1);
    return decimal;
}

// template <typename T>
// struct Compare{    bool operator()(T a, T b) const { return a > b; }};

// template <typename T1, typename T2>
// bool cmp(const pair<T1, T2> &a, const pair<T1, T2> &b)
// {    return a.first > b.first || (a.first == b.first && a.second < b.second);}

// bool prime(int n){for (int i = 2; i * i <= n; ++i)if (n % i == 0)return
// false;return true;}

bool prime[55];
void isPrime()
{
    int range = 55;
    // int range = 100;
    for (int i = 0; i <= range; i++)
        prime[i] = 1;

    prime[0] = prime[1] = 0;
    for (int i = 2; i * i <= range; i++)
        if (prime[i])
            for (int j = i * i; j <= range; j += i)
                prime[j] = 0;
    return;
}
// vl fib;
// void Fib()
// {
//     fib.pb(0);    fib.pb(1);
//     FOR(i, 2, 55)    fib.pb(fib[i - 1] + fib[i - 2]);
// }

////// Factorial && combination & Permutation
// ull factorial(ull n)
// {
//     if (n == 0)        return 1;
//     return n * factorial(n - 1);
// }
// ull comb(ull n, ull r)
// {
//     if (n == 0)        return 1;
//     return factorial(n) / (factorial(r) * factorial(n - r));
// }
// ull per(ull n, ull r)
// {
//     if (n == 0)
//         return 1;
//     return factorial(n) / factorial(n - r);
// }

// template <typename T>
// T Csum(T n){    return n * (n + 1) / 2;}

// void merge(vi &a, int l, int m, int r)
// {
//     int n1 = m - l + 1,
//         n2 = r - m;

//     vi L(n1), R(n2);

//     FOR(i, 0, n1)
//     L[i] = a[l + i];

//     FOR(j, 0, n2)
//     R[j] = a[m + 1 + j];

//     int i = 0, j = 0, k = l;

//     while (i < n1 && j < n2)
//         if (L[i] <= R[j])
//             a[k] = L[i], i++, k++;
//         else
//             a[k] = R[j], j++, k++;

//     while (i < n1)
//         a[k] = L[i], i++, k++;

//     while (j < n2)
//         a[k] = R[j], j++, k++;
// }

// void mergeSort(vi &a, int l, int r)
// {
//     if (l < r)
//     {
//         int m = l + (r - l) / 2;

//         mergeSort(a, l, m);
//         mergeSort(a, m + 1, r);

//         merge(a, l, m, r);
//     }
// }
// int part(vi &a, int l, int r)
// {
//     int pivot = a[r], i = l - 1;
//     FOR(j, l, r)
//     if (a[j] < pivot)
//         i++, swap(a[i], a[j]);

//     swap(a[i + 1], a[r]);
//     return i + 1;
// }
// void quickSort(vi &a, int l, int r)
// {
//     if (l < r)
//     {
//         int pi = part(a, l, r);
//         quickSort(a, l, pi - 1);
//         quickSort(a, pi + 1, r);
//     }
// }
template <typename T>
inline void sortin(T &a)
{
    FORC(a), SORT(a);
}

template <typename T>
inline void rsortin(T &a)
{
    FORC(a), rsort(a);
}

// ll s(ll x, ll xt, ll y, ll yt)
// {    return (x - xt) * (x - xt) + (y - yt) * (y - yt);}

map<str, vector<str>> nonTerminal;
void solve()
{
    /// First
    cout << "How many grammer do you have? \n answer => ";
    int n, x;
    str s, s2;
    map<str,str> Terminal;

    cin >> n;

    while (n--)
    {
        int ter;
        cout << "is it terminal if(1==yes) \n => ";
        cin>>ter;
    
        cout << "Grammer (S -> id) \n => ";
        cin >> s >> s2,
            nonTerminal[s].pb(s2);

        if(ter==1){
            Terminal[s]+= ", " + s2;
        }
    }

    cout << "List of nonTerminal ";
    EL;

    for (const auto &i : nonTerminal)
    {
        cout << i.ff << ": {";
        for (const auto &j : i.ss)
            if (nonTerminal.find(j) != nonTerminal.end())
                cout << "func,";
            else
                cout << j[0] << ", ";

        cout << "}" << endl;
    }

    nonTerminal.clear();
    return;
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);
    int t = 1;
    // isPrime();    // Fib();// fn(); // for(auto &x: m)    cout<<x.ff<<" "<<x.ss<<endl;
    cout << "Test Case: " << endl;
    cin >> t;
    while (t--)
        solve();

    return 0;
}