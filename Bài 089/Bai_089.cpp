#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	float t = 1;
	int m = 0;
	int i = 1;
	int dau = -1;

	while (i <= n)
	{
		t = t * x;
		m = m + i;
		s = s + dau * t / m;
		i = i + 1;
		dau = -dau;
	}
	cout << "s = " << s;
	return 0;
}