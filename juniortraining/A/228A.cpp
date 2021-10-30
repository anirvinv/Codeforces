#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    set<int> shoes;
    for (int i = 0; i < 4; i++)
    {
        int value;
        cin >> value;
        shoes.insert(value);
    }

    cout << 4 - shoes.size() << endl;
}