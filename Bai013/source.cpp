#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap x=";
	float x;
	cin >> x;

	float x2 = x * x;
	float x4 = x2 * x2;
	float x8 = x4 * x4;
	float x7 = x8 / x;
	cout << "x7 = " << x7;

	return 0;
}