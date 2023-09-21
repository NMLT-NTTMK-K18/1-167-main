#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dn = 0;
	int t = n;
	int dv;

	while (t != 0)
	{
		dv = t % 10;
		dn = dn * 10 + dv;
		t = t / 10;
	}

	if (dn == n)
		cout << "La DX";
	else
		cout << "Ko DX";

	return 0;
}