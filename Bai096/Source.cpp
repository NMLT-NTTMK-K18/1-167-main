#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	float s = 0;
	int t = 1;
	int i = n;

	while (i <= n)
	{
		t = t * i;
		s = sqrt(t + s);
		i = i + 1;
	}
	cout << "s = " << s;
	return 0;
}