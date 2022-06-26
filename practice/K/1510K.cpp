#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
#define all(x) begin(x), end(x)

void swap(int &a, int &b)
{
    int temp = a;
    a = b;
    b = temp;
}

void op1(vector<int> &arr)
{
    fo(i, arr.size() - 1)
    {
        swap(arr[i], arr[i + 1]);
        i++;
    }
}
void op2(vector<int> &arr)
{
    fo(i, arr.size() / 2)
    {
        swap(arr[i], arr[i + arr.size() / 2]);
    }
}
bool isSorted(vector<int> a)
{
    fo(i, a.size() - 1)
    {
        if (a[i] > a[i + 1])
        {
            return false;
        }
    }
    return true;
}
void solve()
{
    int n;
    cin >> n;
    vector<int> arr(2 * n);
    vector<int> cp1(2 * n);
    vector<int> cp2(2 * n);

    fo(i, 2 * n)
    {
        cin >> arr[i];
    }
    copy(all(arr), cp1.begin());
    copy(all(arr), cp2.begin());

    int moves1 = 0;
    int moves2 = 0;
    // start with 2
    while (!isSorted(cp1) && moves1 <= (2 * n + 1))
    {
        if (moves1 % 2 == 0)
        {
            op1(cp1);
        }
        else
        {
            op2(cp1);
        }
        moves1++;
    }
    // start with 1
    while (!isSorted(cp2) && moves2 <= (2 * n + 1))
    {
        if (moves2 % 2 == 0)
        {
            op2(cp2);
        }
        else
        {
            op1(cp2);
        }
        moves2++;
    }
    if (!isSorted(cp1))
    {
        cout << -1 << '\n';
    }
    else
    {
        cout << min(moves1, moves2) << '\n';
    }
}
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    // cin >> t;
    t = 1;
    while (t--)
    {
        solve();
    }
}