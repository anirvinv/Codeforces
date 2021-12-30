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

    int n, t;
    cin >> n >> t;
    string s = "";
    if (t == 10)
    {

        s += (char)(1) + '0';
        for (int i = 0; i < n - 1; i++)
            s += "0";
    }
    else
    {
        s += (char)(t % 10) + '0';
        for (int i = 0; i < n - 1; i++)
            s += "0";
    }
    if (t == 10 && n <= 1)
    {
        cout << -1 << endl;
    }
    else
    {

        cout << s << endl;
    }
}