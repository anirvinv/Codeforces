#include <bits/stdc++.h>

using namespace std;
typedef long long ll;

int minIndex(int arr[], int n)
{
    int min = arr[0];
    int index = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (arr[i] < min)
        {
            min = arr[i];
            index = i;
        }
    }
    return index;
}

int maxIndex(int arr[], int n)
{
    int max = arr[0];
    int index = 0;
    for (size_t i = 1; i < n; i++)
    {
        if (arr[i] > max)
        {
            max = arr[i];
            index = i;
        }
    }
    return index;
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
        for (int j = 0; j < n; j++)
        {
            cin >> arr[j];
        }

        int minPos = minIndex(arr, n);
        int maxPos = maxIndex(arr, n);
        int left, right;

        if (minPos < maxPos)
        {
            left = minPos + 1;
            right = n - maxPos;
        }
        else
        {
            left = maxPos + 1;
            right = n - minPos;
        }

        int steps = 0;
        int distance = abs(minPos - maxPos);
        if (left < right)
        {
            steps = left;
            if (distance < right)
            {
                steps += distance;
            }
            else
            {
                steps += right;
            }
        }
        else
        {
            steps = right;
            if (distance < left)
            {
                steps += distance;
            }
            else
            {
                steps += left;
            }
        }
        cout << steps << endl;
    }
}
