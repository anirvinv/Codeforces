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

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        vector<pair<int, int>> buildingTimes;
        for (int i = 1; i <= n; i++)
        {
            int value;
            cin >> value;
            buildingTimes.push_back(make_pair(value, i));
        }

        sort(buildingTimes.begin(), buildingTimes.end());

        int hq = 0;
        int ptr1 = hq + 1;
        int ptr2 = hq - 1;
        map<int, int> buildingIndex;
        unsigned long long total = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (i % 2 == 0)
            {
                buildingIndex[buildingTimes[i].second] = ptr1;
                total += (long long)buildingTimes[i].first * ptr1;
                ptr1++;
            }
            else
            {
                buildingIndex[buildingTimes[i].second] = ptr2;
                total += -1 * (long long)buildingTimes[i].first * ptr2;
                ptr2--;
            }
        }
        cout << total * 2 << '\n';
        cout << 0 << " ";
        for (auto iter = buildingIndex.begin(); iter != buildingIndex.end(); ++iter)
        {
            cout << iter->second << " ";
        }
        cout << '\n';
    }
}