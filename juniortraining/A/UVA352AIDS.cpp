#include <bits/stdc++.h>
using namespace std;
typedef long long ll;

bool visited[25 * 25];
vector<int> adjList[25 * 25];
void s()
{
    // cout << endl;
    // for (int i = 0; i < n; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout << img[i][j] << " ";
    //     }
    //     cout << endl;
    // }
}
int main()
{
    int n;
    while (cin >> n)
    {
        memset(visited, 0, sizeof visited);
        int img[n][n];
        int counter = 0;
        for (int i = 0; i < n; i++)
        {
            string s;
            cin >> s;
            for (int j = 0; j < n; j++)
            {
                img[i][j] = s[j] - '0';
                if (img[i][j] == 0)
                {
                    img[i][j] = -1;
                }
                else
                {
                    img[i][j] = counter;
                    counter++;
                }
            }
        }

        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                int vertex = img[i][j];
                if (vertex != -1)
                {
                    if (i > 0 && img[i - 1][j] >= 0)
                    {
                        adjList[vertex].push_back(img[i - 1][j]);
                    }
                    if (i < n - 1 && img[i + 1][j] >= 0)
                    {
                        adjList[vertex].push_back(img[i + 1][j]);
                    }
                    if (j > 0 && img[i][j - 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i][j - 1]);
                    }
                    if (j < n - 1 && img[i][j + 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i][j + 1]);
                    }
                    if (i > 0 && j > 0 && img[i - 1][j - 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i - 1][j - 1]);
                    }
                    if (i < n - 1 && j < n - 1 && img[i + 1][j + 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i + 1][j + 1]);
                    }
                    if (i < n - 1 && j > 0 && img[i + 1][j - 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i + 1][j - 1]);
                    }
                    if (i > 0 && j < n - 1 && img[i - 1][j + 1] >= 0)
                    {
                        adjList[vertex].push_back(img[i - 1][j + 1]);
                    }
                }
            }
        }
    }
}