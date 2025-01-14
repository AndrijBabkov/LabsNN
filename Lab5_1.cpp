#include <iostream>

using namespace std;

int main()
{
    long long first, second;
    cin >> first >> second;

    int sum_first = 0, sum_second = 0;

    while (first > 0) {
        sum_first += (first % 10);
        first /= 10;
    }
    while (second > 0) {
        sum_second += (second % 10);
        second /= 10;
    }

    if (sum_first > sum_second) {
        cout << "First number";
    }
    else if (sum_first < sum_second) {
        cout << "Second number";
    }
    else {
        cout << "Equal";
    }
    return 0;
}
