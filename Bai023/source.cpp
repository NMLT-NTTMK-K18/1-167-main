#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int hc = (n / 10) % 10;
	cout << "hc = " << hc;

	return 0;
}