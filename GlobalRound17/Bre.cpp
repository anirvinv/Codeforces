#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPal(vector<int> arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (arr[i] != arr[arr.size() - i - 1])
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
        vector<int> arr;
        for (int i = 0; i < n; i++)
        {
            int value;
            cin >> value;
            arr.push_back(value);
        }
        bool pal = true;
        int del[2];
        for (int i = 0; i < n / 2; i++)
        {
            if (arr[i] != arr[n - i - 1])
            {
                pal = false;
                del[0] = i;
                del[1] = n - i - 1;
                break;
            }
        }
        if (pal)
        {
            cout << "YES" << endl;
        }
        else
        {
            vector<int> cop1;
            vector<int> cop2;
            int c1d = arr[del[0]];
            int c2d = arr[del[1]];
            for (int i : arr)
            {
                if (i != c1d)
                {
                    cop1.push_back(i);
                }
                if (i != c2d)
                {

                    cop2.push_back(i);
                }
            }
            if (isPal(cop1) || isPal(cop2))
            {
                cout << "YES" << endl;
            }
            else
            {

                cout << "NO" << endl;
            }
        }
    }
}