#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        string x;
        cin >> x;
        string a = "1";
        string b = "1";
        bool ns = false;
        for (int i = 1; i < n; i++)
        {
            if (!ns && x[i] == '1')
            {
                a += '1';
                b += '0';
                ns = true;
            }
            else if (ns)
            {
                if (x[i] == '0')
                {
                    a += '0';
                    b += '0';
                }
                else if (x[i] == '1')
                {
                    a += '0';
                    b += '1';
                }
                else if (x[i] == '2')
                {
                    a += '0';
                    b += '2';
                }
            }
            else
            {
                if (x[i] == '0')
                {
                    a += '0';
                    b += '0';
                }
                else if (x[i] == '2')
                {
                    a += '1';
                    b += '1';
                }
            }
        }
        cout << a << endl;
        cout << b << endl;
    }
}