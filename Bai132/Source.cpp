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

	float xM;
	cout << "Nhap xM: ";
	cin >> xM;

	float yM;
	cout << "Nhap yM: ";
	cin >> yM;

	float SABC = abs(xA * yB + xB * yC + xC * yA - xB * yA - xC * yB - xA * yC) / 2;
	float SMAB = abs(xA * yB + xB * yM + xM * yA - xB * yA - xM * yB - xA * yM) / 2;
	float SMBC = abs(xM * yB + xB * yC + xC * yM - xB * yM - xC * yB - xM * yC) / 2;
	float SMAC = abs(xA * yM + xM * yC + xC * yA - xM * yA - xC * yM - xA * yC) / 2;
	float S = SMAB + SMBC + SMAC;

	if (S == SABC)
		cout << "M trong";
	else
		cout << "M ngoai";

	return 0;
}