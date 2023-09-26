#define _USE_MATH_DEFINES
#include<iostream>
#include<cmath>
using namespace std;

int main()
{   
	cout << "Nhap ban kinh r=";
	float r;
	cin>> r;
	float s = M_PI * r * r;
	cout <<"Dien tich s="<<s;
	return 0;
	
}