#include <iostream>
//Surname05_2

using namespace std;

int main()
{

    double a, b;
    cin >> a >> b;
    if (a > b) {
        cout << "Input error";
    }
    else {
        int left = (int)a;
        if (a - left > 0) {
            left++;
        }
        int right = (int)b;
        for (int i = left; i <= right; i++) {
            cout << i << " ";
        }
    }
    return 0;
}


