#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
void change(bool &alive)
{
    alive = !alive;
}
int main()
{

    bool alive = true;
    change(alive);
    cout << alive << endl;
}