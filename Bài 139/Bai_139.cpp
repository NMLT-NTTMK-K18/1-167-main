#include<iostream>
using namespace std;

int main()
{
	float a;
	cout << "Nhap a: ";
	cin >> a;

	float b;
	cout << "Nhap b: ";
	cin >> b;

	float x;

	if (a == 0)
		if (b == 0)
			cout << "Vo so nghiem";
		else
			cout << "Vo nghiem";
	else
	{
		x = -b / a;
		cout << "x = " << x;
	}

	return 0;
}