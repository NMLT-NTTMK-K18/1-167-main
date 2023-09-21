#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n = x;

	if (((n % 4 == 0) && (n % 100 != 0)) || (n % 400 == 0))
		cout << "La nam nhuan";
	else
		cout << "Khong la nam nhuan";

	return 0;
}