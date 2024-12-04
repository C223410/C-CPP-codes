#include <bits/stdc++.h>
using namespace std;
#define ff first
#define ss second
typedef string str;
map<str, vector<str>> nonTerminal;
set<str> visited;
int cnt = 0;
void printRecursive(const str &key)
{
if (visited.count(key))
{
// cout << key << " (cycle detected)";
return;
}
visited.insert(key);
if (nonTerminal.find(key) != nonTerminal.end())
{
if (cnt == 0)
cout << key << ": { ";
for (const str &value : nonTerminal[key])
{
if (value == "id")
{
cout << value << ", ";
continue;
}
str firstChar(1, value[0]);
if (nonTerminal.find(firstChar) != nonTerminal.end())
{
cnt++;
printRecursive(firstChar), cnt--;
}
else
cout << firstChar << ", ";
}
if (cnt == 0)
cout << "}";
}
else
cout << key;return;
}
void solve()
{
// cout << "How many grammar rules do you have? \n answer => ";
int n;
str s, s2;
cin >> n;
while (n--)
{
// cout << "Grammar (S -> id) \n => ";
cin >> s >> s2;
nonTerminal[s].push_back(s2);
}
cout << "Map:" << endl;
for (const auto &entry : nonTerminal)
{
visited.clear();
printRecursive(entry.ff);
cout << endl;
}
nonTerminal.clear();
return;
}
int main()
{
ios_base::sync_with_stdio(false);
cin.tie(nullptr);
int t = 1;
// cout << "Test Case: " << endl;
cin >> t;
while (t--)
solve();
return 0;
}