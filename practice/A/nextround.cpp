#include <iostream>

using namespace std;

int main()
{
    int n, k;
    cin >> n >> k;

    int scores[n];
    int temp;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
	scores[i] = temp;
    }

    int place = k - 1;
    int passed = 0;
    
    for (int i = 0; i < n; i++)
    {
        if (scores[i] >= scores[place] && scores[i] > 0)
        {
            passed++;
        }
	else{
		break;
	}
    }

    cout << passed << endl;
}
