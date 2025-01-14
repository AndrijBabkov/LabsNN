#include <iostream>
//Voloshuk01_2.cpp

using namespace std;

int main() {
	long long a, b, c, d, sum, mult, difference;
	cin >> a >> b >> c >> d;
	sum = a + b + c + d;
	mult = a * b * c * d;
	difference = d - a;
	cout << sum << " " << mult << " " << difference;
}