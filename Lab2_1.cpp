#include <iostream>
#include <cmath>
//Surname@2_1.cpp
using namespace std;

int main() {
	double x, y;
	cin >> x >> y;
	double func = exp(x - 1) + asin(0.01 * y);
	cout << func; 
	return 0;
}