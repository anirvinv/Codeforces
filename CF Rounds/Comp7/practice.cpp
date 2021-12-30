#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    vector<int> arr;
    arr.push_back(1);
    arr.push_back(2);
    arr.push_back(3);
    arr.push_back(4);
    arr.erase(arr.begin() + arr.size() - 1);
    for (int i = 0; i < arr.size(); i++)
    {
        cout << arr[i] << " ";
    }
}