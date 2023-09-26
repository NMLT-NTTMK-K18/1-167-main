#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	float xA;
	cout << "Nhap xA: ";
	cin >> xA;

	float yA;
	cout << "Nhap yA: ";
	cin >> yA;

	float xB;
	cout << "Nhap xB: ";
	cin >> xB;

	float yB;
	cout << "Nhap yB: ";
	cin >> yB;

	float xC;
	cout << "Nhap xC: ";
	cin >> xC;

	float yC;
	cout << "Nhap yC: ";
	cin >> yC;

	float a = sqrt(pow(xB - xA, 2) + pow(yB - yA, 2));
	float b = sqrt(pow(xC - xA, 2) + pow(yC - yA, 2));
	float c = sqrt(pow(xC - xB, 2) + pow(yC - yB, 2));

	if ((a + b > c) && (a + c > b) && (b + c > a))
		cout << "La tam giac";
	else
		cout << "Khong la tam giac";

	return 0;
}