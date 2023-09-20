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

	float s = x;
	float t = x;
	int i = 3;
	int dau = -1;

	while (i <= 2 * n + 1)
	{
		t = t * x * x;
		s = s + dau * t;
		i = i + 2;
		dau = -dau;
	}
	cout << "s = " << s;
	return 0;
}