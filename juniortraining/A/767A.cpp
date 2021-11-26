#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
bool barr[100001];
int main()
{
    int n;
    cin >> n;
    int ptr = n;
    for (int i = 0; i < n; i++)
    {
        int value;
        cin >> value;
        barr[value] = true;
        for (int i = ptr; i >= 1 && barr[ptr]; i--)
        {
            cout << i << " ";
            ptr--;
        }
        cout << endl;
    }
}