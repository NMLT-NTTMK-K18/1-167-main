#include <iostream>
using namespace std;
int main()
{
	cout << "Nhap n=";
	int n;
	cin >> n;
	int dem = 0;
	int t = n;
	while (t != 0)
	{
		dem = dem + 1;
		t = t / 10;

	}
	cout << "so luong chu so cua so nguyen duong "<< n <<" la: "  << dem;
	return 0;
}
