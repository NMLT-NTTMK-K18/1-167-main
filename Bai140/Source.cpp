#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float c;
	cout << "Nhap c: ";
	cin >> c;

	float delta = b * b - 4 * a * c;
	float x;
	float x1;
	float x2;

	if (delta <= 0)
		if (delta == 0)
		{
			x = -b / (2 * a);
			cout << "x = " << x;
		}
		else
			cout << "Vo nghiem";
	else
	{
		x1 = (-b + sqrt(delta)) / (2 * a);
		x2 = (-b - sqrt(delta)) / (2 * a);
		cout << "x1 = " << x1 << endl;
		cout << "x2 = " << x2 << endl;
	}

	return 0;
}