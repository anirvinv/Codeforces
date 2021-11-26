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
int cp[410000];
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;
    while (t--)
    {
        memset(cp, 0, sizeof cp);
        int n;
        cin >> n;
        int arr[n];
        int maxInd = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            if (arr[i] == n)
            {
                maxInd = i;
            }
        }
        if (!((maxInd == 0) || (maxInd == n - 1)))
        {
            cout << -1 << endl;
        }
        else
        {

            int cp1 = 410000 / 2;
            int cp2 = cp1 + 1;

            int ptr1 = 0;
            int ptr2 = n - 1;
            while (ptr1 <= ptr2)
            {
                if (arr[ptr1] >= arr[ptr2])
                {
                    cp[cp1] = arr[ptr1];
                    cp1--;
                    ptr1++;
                }
                else
                {
                    cp[cp2] = arr[ptr2];
                    cp2++;
                    ptr2--;
                }
            }

            for (int i = cp1; i <= cp2; i++)
            {
                if (cp[i] != 0)
                {
                    cout << cp[i] << " ";
                }
            }
            cout << endl;
        }
    }
}