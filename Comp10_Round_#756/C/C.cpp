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
const string WHITESPACE = " \n\r\t\f\v";

string ltrim(const string &s)
{
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == string::npos) ? "" : s.substr(start);
}

string rtrim(const string &s)
{
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == string::npos) ? "" : s.substr(0, end + 1);
}

string trim(const string &s)
{
    return rtrim(ltrim(s));
}
bool cyclicEquals(string s1, string s2)
{
    s1 = trim(s1);
    s2 = trim(s2);
    int ptr2 = 0;
    while (s1[0] != s2[ptr2])
    {
        ptr2++;
        ptr2 %= s1.length();
    }
    for (int i = 0; i < s1.length(); i++)
    {
        if (s1[i] != s2[ptr2])
        {
            return false;
        }
        else
        {
            ptr2++;
            ptr2 %= s2.length();
        }
    }
    return true;
}

int main()
{

    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int t;
    cin >> t;
    while (t--)
    {
        // reverse by doing the same thing but with the max
        int n;
        cin >> n;
        int arr[n];
        string ori = "";
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
            ori += arr[i];
        }
        int ptr1 = 0;
        int ptr2 = n - 1;
        string c1 = "";
        while (ptr2 - ptr1 >= 0)
        {
            if (arr[ptr1] >= arr[ptr2])
            {
                string c(1, arr[ptr1] + '0');
                c += " ";
                c1 = c + c1;
                ptr1++;
            }
            else
            {
                c1 += (arr[ptr2] + '0');
                c1 += " ";
                ptr2--;
            }
        }
        bool works = false;
        string c2 = "";
        ptr1 = 0;
        ptr2 = 2 * (n - 1);
        while (ptr2 - ptr1 >= 0)
        {
            if (c1[ptr1] <= c2[ptr2])
            {
                string c(1, c1[ptr1]);
                c += " ";
                c2 = c + c2;
                ptr1 += 2;
            }
            else
            {
                c2 += (c1[ptr2]);
                c2 += " ";
                ptr2 -= 2;
            }
        }
        works = cyclicEquals(ori, c2);

        if (works)
        {
            cout << c1 << endl;
        }
        else
        {
            cout << -1 << endl;
        }
    }
}