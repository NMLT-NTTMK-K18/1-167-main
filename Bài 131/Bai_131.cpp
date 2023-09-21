#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	float xA, yA;
	cout << "Nhap xA: ";
	cin >> xA;
	cout << "Nhap yA: ";
	cin >> yA;

	float xB, yB;
	cout << "Nhap xB: ";
	cin >> xB;
	cout << "Nhap yB: ";
	cin >> yB;

	float xC, yC;
	cout << "Nhap xC: ";
	cin >> xC;
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