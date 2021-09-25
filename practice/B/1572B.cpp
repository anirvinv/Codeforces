#include <iostream>
#include <vector>

using namespace std;

bool isIn(int l1[], int size1, int l2[], int size2)
{
    bool result;

    for (int i = 0; i < size2; i++)
    {
        result = true;
        for (int j = 0; (j < size1) && result; j++)
        {
            // cout << "  " << l2[i + j] << " " << l1[j] << endl;
            result = (l2[i + j] == l1[j]);
            // cout << result << endl;

            if ((j == size1 - 1) && result)
            {
                return result;
            }
        }
    }
    return false;
}

int main()
{

    int t;
    cin >> t;

    for (size_t i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int arr[n];
        for (size_t j = 0; j < n; j++)
        {
            cin >> arr[j];
        }
        vector<int> indices;
        int case1[3] = {1, 1, 0};
        int case2[3] = {1, 0, 1};
        int case3[3] = {0, 1, 1};

        while (isIn(case1, 3, arr, n) || isIn(case2, 3, arr, n) || isIn(case3, 3, arr, n))
        {
            for (int j = 0; j < n - 2; j++)
            {
                bool case1 = (arr[j] == 1 & arr[j + 1] == 1 && arr[j + 2] == 0);
                bool case2 = (arr[j] == 1 & arr[j + 1] == 0 && arr[j + 2] == 1);
                bool case3 = (arr[j] == 0 & arr[j + 1] == 1 && arr[j + 2] == 1);
                if (case1 || case2 || case3)
                {
                    arr[j] = 0;
                    arr[j + 1] = 0;
                    arr[j + 2] = 0;
                    indices.push_back(j);
                }
            }
        }
        bool zeroes = true;
        for (int j = 0; j < n; j++)
        {
            if (arr[j] == 1)
            {
                zeroes = false;
                break;
            }
        }
        if (zeroes)
        {
            cout << "YES" << endl;
            cout << indices.size() << endl;
            if (indices.size() == 0)
            {
            }
            else
            {
                for (auto j = 0; j < indices.size(); j++)
                {
                    cout << indices[j] + 1 << " ";
                }
                cout << endl;
            }
        }
        else
        {
            cout << "NO" << endl;
        }
    }
}