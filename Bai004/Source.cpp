#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float s = 4 * M_PI * pow(r, 2);
	cout << "Dien tich xung quanh cua hinh cau = " << s;

	return 0;
}