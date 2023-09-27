#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int dem = 0;
	int i = 2;
	while (i <= n)
	{
		if (n % i == 0)
			dem++;
		i = i + 2;
	}
	cout << "so luong uoc so=" << dem;
	return 0;
}