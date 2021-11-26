#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    string s, mult;
    while (cin >> s)
    {
        cin >> mult;
        reverse(mult.begin(), mult.end());
        reverse(s.begin(), s.end());
        vector<vector<int>> arrays;
        for (int j = 0; j < mult.size(); j++)
        {

            int k = (int)(mult[j]) - 48;
            vector<int> arr;

            for (int k = 0; k < j; k++)
            {
                arr.insert(arr.begin(), 0);
            }
            int carry = 0;
            int i = 0;
            while (true)
            {
                if (i == s.length())
                {
                    arr.insert(arr.begin(), carry);
                    break;
                }
                int val = (carry + ((int)(s[i]) - 48) * k) % 10;
                arr.insert(arr.begin(), val);
                carry = (carry + ((int)(s[i]) - 48) * k) / 10;
                i++;
            }
            arrays.push_back(arr);
        }

        // pad the arrays so they are all the same size
        int maxSize = arrays[0].size();
        for (int i = 1; i < arrays.size(); i++)
        {
            if (arrays[i].size() > maxSize)
            {
                maxSize = arrays[i].size();
            }
        }

        for (int i = 0; i < arrays.size(); i++)
        {
            if (arrays[i].size() < maxSize)
            {
                int k = maxSize - arrays[i].size();
                while (k--)
                {
                    arrays[i].insert(arrays[i].begin(), 0);
                }
            }
        }
        for (int i = 0; i < arrays.size(); i++)
        {
            reverse(arrays[i].begin(), arrays[i].end());
        }
        string ans = "";
        int i = 0;
        int carry = 0;
        while (true)
        {
            if (i == maxSize)
            {
                break;
            }
            int value = 0;
            for (vector<int> a : arrays)
            {
                value += a[i];
            }
            value += carry;
            ans = to_string(value % 10) + ans;
            carry = value / 10;
            i++;
        }
        string realAns = "";
        bool notZero = false;
        for (int i = 0; i < ans.length(); i++)
        {
            if (ans[i] != '0')
            {
                notZero = true;
            }
            if (notZero)
            {
                realAns.push_back((ans[i]));
            }
        }
        cout << realAns << endl;
    }
}