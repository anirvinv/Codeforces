#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    cin >> n;
    // vector<int> arr;
    map<int, vector<int>> count;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        count[value].push_back(i + 1);
        // arr.push_back(value);
    }
    int min = count[1].size();
    int man = 1;
    for (int i = 1; i <= 3; i++)
    {
        if (count[i].size() < min)
        {
            min = count[i].size();
            man = i;
        }
    }

    cout << min << endl;
    for (int i = 0; i < count[man].size(); i++)
    {
        cout << count[1][i] << " " << count[2][i] << " " << count[3][i] << endl;
    }
}