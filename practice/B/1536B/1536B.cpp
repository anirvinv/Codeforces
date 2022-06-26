#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

int lexComp(string a, string b)
{
    int res = 0;
    assert(a.length() == b.length());
    for (int i = 0; i < a.length(); i++)
    {
        res += a[i] - b[i];
    }
    return res;
}

string strIncrem(string base)
{
    int carry = 0;
    string res = "";
    if (base[base.length() - 1] == 'z')
    {
        carry = 1;
        res.push_back('a');
    }
    else
    {
        res.push_back((char)(1 + base[base.length() - 1]));
        carry = 0;
    }
    int ptr = base.length() - 2;
    while (ptr >= 0)
    {
        if (base[ptr] == 'z' && carry == 1)
        {
            carry = 1;
            res.push_back('a');
        }
        else
        {
            res.push_back((char)(base[ptr] + carry));
            carry = 0;
        }
        ptr--;
    }
    if (carry == 1)
    {
        res.push_back('a');
    }
    reverse(res.begin(), res.end());
    return res;
}

bool isSubstr(string a, string b)
{

    for (int i = 0; i < b.length() - a.length() + 1; i++)
    {
        if (b.substr(i, a.length()).compare(a) == 0)
        {
            return true;
        }
    }
    return false;
}

void solve()
{
    int n;
    cin >> n;
    string s;
    cin >> s;

    string ans = "a";
    bool found = false;
    while (ans.length() <= s.length())
    {
        if (!isSubstr(ans, s))
        {
            found = true;
            break;
        }
        ans = strIncrem(ans);
    }
    if (found)
    {
        cout << ans << '\n';
    }
    else
    {
        string fin(s.length() + 1, 'a');
        cout << fin << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    // t = 1;
    while (t--)
    {
        solve();
    }
}