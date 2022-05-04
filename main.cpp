#include <iostream>
#include <math.h>


using namespace std;


double z(double a, double b) {
	if (a < b) {
		return sqrt(abs(a * a - b * b));
	}
	if (a >= b) {
		return 1 - 2 * cos(a) * sin(b);
	}
}

double t(double z, double b, double a) {
	if (z < b) {
		return pow((z + a * a * b), 1 / 3);
	}
	if (z = b) {
		return 1 - log(z) + cos(a * a * b);
	}
	if (z > b) {
		return 1 / (cos(z * a));
	}
}

int main() {
	double a = -0.6;
	double b = 5.3;
	cout << "a = " << a << endl << "b = " << b << endl;

	double z1 = z(a, b);
	if ((cos(z1 * a) != 0) && (z > 0)) {
		cout << "z = " << z(a, b) << endl << "t = " << t(z1, b, a) << endl;
	}
}