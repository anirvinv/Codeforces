#include <iostream>

using namespace std;

int main() {
    double n;
    cin >> n;
    double denom = 100 * n;
    double sum = 0;
    for (int i = 0; i < n; i++) {
        double percentage;
        cin >> percentage;
        sum += percentage;
    }

    cout << 100 * (sum / denom);
}