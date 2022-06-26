#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool isPal(int arr[], int n)
{
    for (int i = 0; i < n / 2; i++)
    {
        if (arr[n - i - 1] != arr[i])
        {
            return false;
        }
    }
    return true;
}
bool isPal(vector<int> arr)
{
    for (int i = 0; i < arr.size() / 2; i++)
    {
        if (arr[arr.size() - i - 1] != arr[i])
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
        int arr[n];
        vector<int> vec;
        vector<int> s;
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            int value = arr[i];
            vec.push_back(value);
            if (i < n / 2)
            {
                if (find(s.begin(), s.end(), value) == s.end())
                {
                    s.push_back(arr[i]);
                }
            }
        }

        if (isPal(arr, n))
        {
            cout << "YES" << endl;
        }
        else
        {
            bool found = false;
            for (int d : s)
            {
                vector<int> cop;
                for (int i = 0; i < vec.size(); i++)
                {
                    cop.push_back(vec[i]);
                }
                for (int i = 0; i < cop.size(); i++)
                {
                    if (cop[i] == d)
                    {
                        cop.erase(cop.begin() + i);
                        i--;
                    }
                }
                if (isPal(cop))
                {
                    found = true;
                    break;
                }
                if (found)
                {
                    break;
                }
            }
            if (found)
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