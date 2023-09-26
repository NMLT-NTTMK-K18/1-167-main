#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	cout << "Nhap ban kinh r=";
	float r;
	cin >> r;
	float p = 2 * M_PI * r;
	cout << "Chu vi cua duong tron=" << p;
	return 0;
}