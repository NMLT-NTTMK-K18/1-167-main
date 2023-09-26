#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Nhap n: ";
	cin >> n;

	int ahh;
	int bhh;
	int at = 2;
	int bt = 1;
	int i = 2;

	while (i <= n)
	{
		ahh = 3 * bt + 2 * at;
		bhh = at + 3 * bt;
		i = i + 1;
		at = ahh;
		bt = bhh;
	}
	cout << "ahh = " << ahh << " va bhh = " << bhh;
	return 0;
}