#include <iostream>
#include<iomanip>
using namespace std;
int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int i = 1;
	cout << "cac uoc so le cua " << n << " la:";
	while (i <= n)
	{
		if (n % i == 0)
			cout << setw(4) << i;
		i = i + 2;
	}
	return 0;
}
