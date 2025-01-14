#include <iostream>
#include <cmath>
//Surname03_1.cpp

using namespace std;

int main() {
	double a, b, c, D, x1, x2;
	cin >> a >> b >> c;

	D = pow(b, 2) - 4 * a * c;
	if (D < 0) {
		cout << "No roots";
	}
	else if (D == 0) {
		cout << "One root: " << -b / (2 * a);
	}
	else {
		cout << "Two roots: " << (-b + sqrt(D)) / (2 * a) << " " << (-b - sqrt(D)) / (2 * a);
	}
	return 0;
}