#define M_PI 3.14159265358979323846
#define M_ro 0.001
#include <iostream>
#include <cmath>
//Surname01_2.cpp

using namespace std;

int main() {
	double m;
	cin >> m;
	double diameter = pow(6 * m / (M_PI * M_ro), 1.0 / 8.0);
	cout << diameter;
	return 0;
}
