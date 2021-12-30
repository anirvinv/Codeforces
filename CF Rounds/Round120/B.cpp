#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define fo(i, n) for (int i = 0; i < n; i++)
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
        string rated;
        cin >> rated;

        vector<int> disliked;
        vector<int> liked;
        fo(i, n)
        {
            if (rated[i] == '1')
            {
                liked.push_back(arr[i]);
            }
            else
            {
                disliked.push_back(arr[i]);
            }
        }

        sort(liked.begin(), liked.end());
        sort(disliked.begin(), disliked.end());

        map<int, int> ranking;

        int start = n;

        for (int i = liked.size() - 1; i >= 0; i--)
        {
            ranking[liked[i]] = start--;
        }

        for (int i = disliked.size() - 1; i >= 0; i--)
        {
            ranking[disliked[i]] = start--;
        }

        for (int i : arr)
        {
            cout << ranking[i] << " ";
        }
        cout << '\n';
    }
}