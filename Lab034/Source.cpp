#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	double R1;
	double R2;
	double x;
	double y;

	cout << "R1 = "; cin >> R1;
	cout << "R2 = "; cin >> R2;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	if ((x >= 0 && x <= R1 && y >= sqrt(R2 * R2 - x * x) && y <= sqrt(R1 * R1 - x * x)) || (x >= -R1 && x <= 0 && y >= (-1) * sqrt(R1 * R1 - x * x) && y <= (-1) * sqrt(R2 * R2 - x * x)))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	return 0;
}