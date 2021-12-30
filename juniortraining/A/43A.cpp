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
    int n;
    cin >> n;
    map<string, int> score;
    while (n--)
    {
        string s;
        cin >> s;
        score[s]++;
    }
    string winner = score.begin()->first;
    int pts = score.begin()->second;
    for (auto iter = score.begin(); iter != score.end(); iter++)
    {
        if (iter->second > pts)
        {
            winner = iter->first;
        }
    }
    cout << winner << endl;
}