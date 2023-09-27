#define _USE_MATH_DEFINES
#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	cout << "Nhap ban kinh r = ";
	float r;
	cin >> r;

	float v = 4 / 3 * M_PI * pow(r, 3);
	cout << "The tich cua hinh cau=" << v;

	return 0;
}