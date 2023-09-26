#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	float s = 1;
	int m = 1;
	float e = 1;
	int i = 1;

	while (e >= pow(10, -6))
	{
		m = m * i;
		e = (float)1 / m;
		s = s + e;
		i = i + 1;
	}
	cout << "s = " << s;
	return 0;
}