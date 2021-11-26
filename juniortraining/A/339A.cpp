#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<int> arr;

    string s;
    cin >> s;

    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] != '+')
        {
            arr.push_back((int)s[i] - 48);
        }
    }
    sort(arr.begin(), arr.end());

    for (int i = 0; i < arr.size(); i++)
    {
        if (i == arr.size() - 1)
        {

            cout << arr[i];
        }
        else
        {

            cout << arr[i] << "+";
        }
    }
    cout << endl;
}