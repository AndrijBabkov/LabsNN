#include <iostream>
using namespace std;
int main() {
	int N, a, b, c, d, e;
	cin >> N;
	a = N / 10000;
	b = N / 1000 % 10;
	c = N / 100 % 10;
	d = N / 10 % 10;
	e = N % 10;
	cout << a << endl << b << endl << c << endl << d << endl << e;
	return 0;
}