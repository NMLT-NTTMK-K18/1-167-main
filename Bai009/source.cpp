#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Nhap r = ";
	float r;
	cin >> r;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s = (float)1 / 2 * n * r * r * sin(2 * M_PI / n);
	cout << "Dien tich da giac deu " << n << " canh noi tiep trong duong tron ban kinh " << r << " = " << s;

	return 0;
}