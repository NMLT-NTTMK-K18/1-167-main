#include<iostream>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 1 - x;
	float t = x;
	int m = 1;
	int i = 3;
	int dau = 1;

	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		m = m * i * (i - 1);
		s = s + dau * t / m;
		i = i + 2;
		dau = -dau;
	}
	cout << "s = " << s;
	return 0;
}