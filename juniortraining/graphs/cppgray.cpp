#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int n;
    while (cin >> n)
    {

        vector<int> arr[5];
        arr[0].push_back(1);
        arr[1].push_back(2);
        arr[2].push_back(3);
        arr[3].push_back(4);
        arr[4].push_back(5);
        for (vector<int> v : arr)
        {
            for (int i : v)
            {
                cout << i << " ";
            }
            cout << endl;
        }
    }
}