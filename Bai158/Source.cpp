#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int lc = n % 10;
	int dem = 0;
	int t = n;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		if (dv > lc)
			lc = dv;
		t = t / 10;
	}

	t = n;

	while (t != 0)
	{
		dv = t % 10;
		if (dv == lc)
			dem = dem + 1;
		t = t / 10;
	}

	cout << "dem = " << dem;

	return 0;
}