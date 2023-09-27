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

	float p = 2 * n * r * sin(M_PI / n);
	cout << "Chu vi da giac deu noi tiep trong duong trong ban kinh " << r << " = " << p;

	return 0;
}
