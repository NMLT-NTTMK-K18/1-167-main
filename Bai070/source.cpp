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
	int s = 0;
	int t = 1;
	int i = 2;
	while (i <= 2*n)
	{
		t = t * x*x;
		s = s + t;
		i = i + 2;
	}
	cout << "s=" << s;
	return 0;
}