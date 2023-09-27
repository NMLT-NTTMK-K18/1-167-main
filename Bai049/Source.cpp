#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	cout << "Nhap n = ";
	int n;
	cin >> n;

	int i = 1;
	while (i <= n)
	{
		if (n % i == 0)
			cout << setw(4) << i;
		i = i + 1;
	}

	return 0;
}
