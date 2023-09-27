#include <iostream>
using namespace std;

int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	float s = 0;
	int m = 0;
	int i = 1;
	while (i <= n)
	{
		m = m + i;
		s = s + (float)1 / m;
		i = i + 1;
	}

	cout << "s = " << s;

	return 0;
}