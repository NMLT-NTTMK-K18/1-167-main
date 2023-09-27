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
	int t = 1;
	int m = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * x;
		m = m * i;
		s = s + (float)t / m;
		i = i + 1;
	}

	cout << "s = " << s;

	return 0;
}