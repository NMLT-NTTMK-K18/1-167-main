#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap x=";
	int x;
	cin >> x;
	cout << "Nhap n=";
	int n;
	cin >> n;
	float s = 1;
	int t = 1;
	int m = 1;
	int i = 2;
	while (i <=2* n)
	{
		t = t * x * x;
		m = m * i*(i-1);
		s = s + (float)t / m;
		i = i + 2;
	}
	cout << "s=" << s;
	return 0;
}