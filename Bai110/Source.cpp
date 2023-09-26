#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int x;
	cout << "Nhap x: ";
	cin >> x;

	float s = 1;
	int t = 1;
	int m = 1;
	int i = 1;
	float e = 1;

	while (e >= pow(10, -6))
	{
		t = t * x;
		m = m * i;
		e = (float)t / m;
		s = s + e;
		i = i + 1;
	}
	cout << "s = " << s;
	return 0;
}