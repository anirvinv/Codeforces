#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    string w;
    cin >> w;
    set<char> s;
    for (int i = 0; i < n; i++)
    {
        s.insert(tolower(w[i]));
    }
    if (s.size() == 26)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}