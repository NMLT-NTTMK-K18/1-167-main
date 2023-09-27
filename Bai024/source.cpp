#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int ht = (n / 100) % 10;
	cout << "ht = " << ht;

	return 0;
}