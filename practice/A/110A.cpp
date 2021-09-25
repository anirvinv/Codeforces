#include <iostream>

using namespace std;

int main()
{

    string n;

    cin >> n;
    int counter = 0;
    for (size_t i = 0; i < n.length(); i++)
    {
        if (n[i] == '4' || n[i] == '7')
        {
            counter += 1;
        }
    }

    if (counter == 7 || counter == 4)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}