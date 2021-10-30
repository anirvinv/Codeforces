#include <bits/stdc++.h>
using namespace std;

int getMaxIndex(int arr[], int left, int right)
{
    int max = arr[left];
    int index = left;
    for (int i = left; i <= right; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
}

void swap(int arr[], int i, int j)
{
    int temp = arr[i];
    arr[i] = arr[j];
    arr[j] = temp;
}

void shift(int arr[], int l, int r)
{
    int temp1 = arr[l + 1];
    int temp2;
    int count = 0;
    for (int i = r - 1; i >= l; i--)
    {
        swap(arr, r, i);
    }
}

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }

        int left = 0;
        int right = n - 1;
        vector<vector<int>> indicesList;
        int steps = 0;
        while (right >= 0)
        {
            int maxIndex = getMaxIndex(arr, 0, right);
            if (maxIndex == right)
            {
            }
            else
            {
                steps++;
                left = maxIndex;

                shift(arr, left, right);
                vector<int> indices;
                if (left > right)
                {
                    indices.push_back(right + 1);
                    indices.push_back(left + 1);
                }
                else
                {
                    indices.push_back(left + 1);
                    indices.push_back(right + 1);
                }
                indices.push_back(1);

                indicesList.push_back(indices);
            }
            right--;
        }

        cout << steps << endl;
        for (int i = 0; i < steps; i++)
        {
            for (int e : indicesList[i])
            {
                cout << e << " ";
            }
            cout << endl;
        }
    }
}