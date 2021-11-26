#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    vector<int> v;
    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(), v.end());
    int count = n - 2;
    int first = v[0];
    for (int i = 1; i < v.size(); i++)
    {
        if (v[i] == first)
        {
            count--;
        }
        else
        {
            break;
        }
    }
    int last = v[v.size() - 1];
    for (int i = v.size() - 2; i >= 0; i--)
    {
        if (v[i] == last)
        {
            count--;
        }
        else
        {
            break;
        }
    }
    if (count < 1)
    {
        count = 0;
    }
    cout << count << endl;
}