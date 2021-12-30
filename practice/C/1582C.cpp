#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)

bool isPalindrome(string s)
{
    for (int i = 0; i < s.length() / 2; i++)
    {
        if (s[i] != s[s.length() - i - 1])
        {
            return false;
        }
    }
    return true;
}

bool marked[130];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        memset(marked, 0, sizeof marked);
        int n;
        cin >> n;
        string s;
        cin >> s;
        vector<char> letters;
        fo(i, n)
        {
            if (!marked[s[i]])
            {
                letters.push_back(s[i]);
                marked[s[i]] = 1;
            }
        }
        vector<pair<string, string>> possible;
        // vector<char> removedOrder;
        int minErase = 0;
        for (char c : letters)
        {
            string res = "";
            string res2 = "";
            for (int i = 0; i < n; i++)
            {
                if (s[i] != c)
                {
                    res += s[i];
                    res2 += s[i];
                }
                else
                {
                    res2 += '0';
                }
            }
            if (isPalindrome(res))
            {
                // removedOrder.push_back(c);
                possible.push_back(make_pair(res, res2));
            }
        }
        int minRemoved = n;
        for (int i = 0; i < possible.size(); i++)
        {
            int removed = n - possible[i].first.length();
            string curr = possible[i].second;
            int left = 0;
            int right = curr.length() - 1;
            while (left < right)
            {
                // both arent 0
                if (curr[left] != '0' && curr[left] == curr[right])
                {
                    left++;
                    right--;
                }
                // right is 0
                else if (curr[right] == '0' && curr[left] != '0')
                {
                    right--;
                }
                // left is 0
                else if (curr[left] == '0' && curr[right] != '0')
                {
                    left++;
                }
                else if (left < right)
                {
                    left++;
                    right--;
                    removed -= 2;
                }
            }
            if (left == right && curr[left] == '0')
            {
                removed--;
            }
            minRemoved = min(removed, minRemoved);
        }

        if (n == 1)
        {
            cout << 0 << '\n';
        }
        else if (minRemoved == n)
        {
            cout << -1 << '\n';
        }
        else
        {
            cout << minRemoved << '\n';
        }
    }
}