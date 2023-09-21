#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dt = n;

	while (dt >= 10)
		dt = dt / 10;

	int dem = 0;
	int t = n;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv == dt)
			dem++;
		t = t / 10;
	}

	cout << "dem = " << dem;

	return 0;
}