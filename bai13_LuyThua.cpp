// bai13_LuyThua.cpp : This file contains the 'main' function. Program execution begins and ends there.
#include <iostream>
using namespace std;
int main()
{
	cout << "Luy Thua:" << endl;
	int so, luythua = 1,mc;
	cin >> so;
	cout << "nhap luythua:";
	cin >> mc ;
	for (int a = 1; a <so; a++)
	{
		luythua *= so;
	}
	cout << luythua * so;
	return 0;
}
