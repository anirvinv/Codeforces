#include <iostream>
#include <vector>

using namespace std;

bool listEquals(int n, int l1[], int l2[])
{
    for (int i = 0; i < n; i++)
    {
        if (l1[i] != l2[i])
        {
            return false;
        }
    }
    return true;
}

int main()
{

    int t;

    cin >> t;
    for (size_t i = 0; i < t; i++)
    {
        int oneCount = 0;
        int zeroCount = 0;
        int toneCount = 0;
        int tzeroCount = 0;
        int n;
        cin >> n;
        int arr[n];
        int temp[n];
        vector<int> indices;

        for (size_t j = 0; j < n; j++)
        {
            int val;
            cin >> val;
            arr[j] = val;
            temp[j] = val;
        }
        int count = 0;
        int operations = 0;
        while (count == 0 || !listEquals(n, temp, arr))
        {
            if (count != 0)
            {
                for (int j = 0; j < n; j++)
                {
                    if (temp[j] == 1)
                    {
                        toneCount++;
                    }
                    else if (temp[j] == 0)
                    {
                        tzeroCount++;
                    }
                    if (toneCount == 3)
                    {
                        toneCount = 1;
                        tzeroCount = 0;
                    }
                    if (tzeroCount == 2)
                    {
                        tzeroCount = 1;
                        toneCount = 0;
                    }
                    if (tzeroCount == 1 && toneCount == 2)
                    {
                        temp[j] = 0;
                        temp[j - 1] = 0;
                        temp[j - 2] = 0;
                    }
                }
            }

            for (int j = 0; j < n; j++)
            {
                if (arr[j] == 1)
                {
                    oneCount++;
                }
                else if (arr[j] == 0)
                {
                    zeroCount++;
                }
                if (oneCount == 3)
                {
                    oneCount = 1;
                    zeroCount = 0;
                }
                if (zeroCount == 2)
                {
                    zeroCount = 1;
                    oneCount = 0;
                }
                if (zeroCount == 1 && oneCount == 2)
                {
                    arr[j] = 0;
                    arr[j - 1] = 0;
                    arr[j - 2] = 0;
                    indices.push_back(j - 1);
                    operations++;
                }
            }
            count++;
        }

        bool zeroes = true;
        for (size_t j = 0; j < n; j++)
        {
            if (arr[j] != 0)
            {
                zeroes = false;
                break;
            }
        }

        if (zeroes)
        {
            cout << "YES" << endl;
            cout << operations << endl;
            for (int j = 0; j < indices.size(); j++)
            {
                cout << indices[j] << " ";
            }
            if (indices.size() > 0)
            {
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
        count++;
    }
}