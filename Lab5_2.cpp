#include <iostream>

using namespace std;

int main()
{
    string number_ticket;

    cin >> number_ticket;
    if (number_ticket.size() != 6) {
        cout << "Input error";
    }
    else {
        int sum_odd = 0, sum_even = 0;
        for (int i = 0; i < number_ticket.size(); i++) {
            if (i % 2 == 0) {
                sum_even += (int)number_ticket[i];
            }
            else {
                sum_odd += number_ticket[i];
            }
        }

        if (sum_even == sum_odd) {
            cout << "Lucky";
        }
        else {
            cout << "No";
        }
    }

    return 0;
}

