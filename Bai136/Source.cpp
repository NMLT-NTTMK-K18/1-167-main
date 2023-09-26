#include <iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int y;
	cout << "Nhap y: ";
	cin >> y;

	int n = x;
	bool dk1;
	bool dk2;

	while (n <= y)
	{
		dk1 = (n % 4 == 0) && (n % 100 != 0);
		dk2 = n % 400 == 0;
		if (dk1 || dk2)
			cout << "Nam nhuan: " << n << endl;
		n = n + 1;
	}

	return 0;
}