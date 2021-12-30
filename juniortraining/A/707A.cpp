#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    string c = "#Color";
    string bw = "#Black&White";
    bool colored = false;
    int n, m;
    cin >> n >> m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            char c;
            cin >> c;
            if (c != 'W' && c != 'B' && c != 'G')
            {
                colored = true;
            }
        }
    }

    if (colored)
    {
        cout << c << endl;
    }
    else
    {
        cout << bw << endl;
    }
}