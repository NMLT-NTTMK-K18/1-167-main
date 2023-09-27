#include <iostream>
using namespace std;

int main()
{
	float x1, y1;
	cout << "Nhap x1 = ";
	cin >> x1;
	cout << "Nhap y1 = ";
	cin >> y1;

	float x2, y2;
	cout << "Nhap x2 = ";
	cin >> x2;
	cout << "Nhap y2 = ";
	cin >> y2;

	float x3, y3;
	cout << "Nhap x3 = ";
	cin >> x3;
	cout << "Nhap y3 = ";
	cin >> y3;

	float a = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
	float b = sqrt(pow(x3 - x2, 2) + pow(y3 - y2, 2));
	float c = sqrt(pow(x3 - x1, 2) + pow(y3 - y1, 2));
	float p = (a + b + c) / 2;
	float s = sqrt(p * (p - a) * (p - b) * (p - c));
	cout << "dien tich tam giac=" << s;

	return 0;
}