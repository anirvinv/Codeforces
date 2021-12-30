#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define FOR(i, b, n, k) for (int i = b; i < n; i += k)
#define fo(i, n) for (int i = 0; i < n; i++)
void print(vector<int> arr)
{
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

void transform(int arr[], int n)
{
    map<int, int> occ;
    fo(i, n)
    {
        occ[arr[i]]++;
    }
    fo(i, n)
    {
        arr[i] = occ[arr[i]];
    }
}

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        fo(i, n)
        {
            cin >> arr[i];
        }
        int arrcp[n];

        fo(i, n)
        {
            arrcp[i] = arr[i];
        }

        int q;
        cin >> q;
        int mt = 0;
        int queries[q][2];
        fo(i, q)
        {
            cin >> queries[i][0]; // position
            cin >> queries[i][1]; // transformation
            mt = max(mt, queries[i][1]);
        }
        mt = min(mt, n);
        int transArrs[mt + 1][n];

        fo(i, mt + 1)
        {
            fo(j, n)
            {
                transArrs[i][j] = arr[j];
            }
            transform(arr, n);
        }

        fo(i, q)
        {
            int x = queries[i][0] - 1;
            int k = min(queries[i][1], n);

            cout << transArrs[k][x] << endl;
        }
    }
}