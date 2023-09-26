#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int s = 0;
	int t = 1;
	int i = 1;
	while (i <= n)
	{
		t = t * i;
		s = s + t;
		i = i + 1;
	}
	cout << "s=" << s;
	return 0;
}