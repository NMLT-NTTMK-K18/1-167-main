#include<iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int dem = 0;
	int i = 1;

	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 1;
	}

	if (dem == 2)
		cout << "NT";
	else
		cout << "Ko NT";

	return 0;
}