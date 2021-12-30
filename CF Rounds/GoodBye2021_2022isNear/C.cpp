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

        if (n == 1)
        {
            cout << 0 << '\n';
        }
        else
        {
            // finding the largest number of elements that are evenly spaced that maintain common difference

            int largestSub = 0;
            vector<int> cds;

            for (int i = 1; i < n; i++)
            {
                for (int j = 0; j < n - i; j += i)
                {
                    int cd = arr[j] - arr[j + i];
                    if (find(cds.begin(), cds.end(), cd) == cds.end())
                    {
                        cds.push_back(cd);
                    }
                }

                for (int c : cds)
                {
                    int numElements = 1;
                    int fac = 1;
                    int lastEl = arr[1];
                    for (int j = 1; j < n - i; j += i)
                    {
                        if ((lastEl - arr[j + i]) == (fac * c))
                        {
                            numElements++;
                            fac = 1;
                            lastEl = arr[j + i];
                        }
                        else
                        {
                            fac++;
                        }
                    }
                    largestSub = max(numElements, largestSub);
                }
            }

            cds.clear();
            // start from two different points because jumps
            for (int i = 1; i < n; i++)
            {
                for (int j = 1; j < n - i; j += i)
                {
                    int cd = arr[j] - arr[j + i];
                    if (find(cds.begin(), cds.end(), cd) == cds.end())
                    {
                        cds.push_back(cd);
                    }
                }

                for (int c : cds)
                {
                    int numElements = 1;
                    int fac = 1;
                    for (int j = 1; j < n - i; j += i)
                    {
                        if ((arr[j] - arr[j + i]) == (c * fac))
                        {
                            numElements++;
                            fac = 1;
                        }
                        else
                        {
                            fac++;
                        }
                    }
                    largestSub = max(numElements, largestSub);
                }
            }
            cout << n - largestSub << '\n';
        }
    }
}