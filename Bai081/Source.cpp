#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap x = ";
	int x;
	cin >> x;

	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s = 0;
	int m = 1;
	int i = 0;
	while (i <= n)
	{
		m = m * (x + i);
		s = s + (float)1 / m;
		i = i + 1;
	}

	cout << "s = " << s;

	return 0;
}
