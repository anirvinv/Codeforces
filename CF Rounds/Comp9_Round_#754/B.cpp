#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool isSorted(string s)
{
    for (int i = 0; i < s.length() - 1; i++)
    {
        if ((s[i] - '0') > (s[i + 1] - '0'))
        {
            return false;
        }
    }
    return true;
}
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int ptr1 = 0;
        int ptr2 = n - 1;
        vector<int> indices;
        while (ptr2 > ptr1)
        {
            if (s[ptr1] == '1')
            {
                indices.push_back(ptr1 + 1);
                while (s[ptr2] != '0' && ptr2 > ptr1)
                {
                    ptr2--;
                }
                if (ptr2 == ptr1)
                {
                    // indices.clear();
                    break;
                }
                indices.push_back(ptr2 + 1);
                ptr2--;
            }
            ptr1++;
        }
        if (!isSorted(s))
        {
            cout << 1 << endl;
            sort(indices.begin(), indices.end());
            cout << indices.size() << " ";
            for (int i : indices)
            {
                cout << i << " ";
            }
            cout << endl;
        }
        else
        {
            cout << 0 << endl;
        }
    }
}