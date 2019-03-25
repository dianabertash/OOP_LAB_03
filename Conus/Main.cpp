#include <iostream>

#include "Conus.h"


using namespace std;

int main()
{
	Conus conus(9.5, 2.5);
	cout << "GetHeight(): " << conus.GetHeight() << endl;
	cout << "GetRadius(): " << conus.GetRadius() << endl;

	cout << "Capacity(): " << conus.Capacity() << endl;
	cout << "Area(): " << conus.Area() << endl;

	conus.SetHeight(8.3);
	conus.SetHeight(4.5);

	cout << "GetHeight(): " << conus.GetHeight() << endl;
	cout << "GetRadius(): " << conus.GetRadius() << endl;

	cout << "Capacity(): " << conus.Capacity() << endl;
	cout << "Area(): " << conus.Area() << endl;

	system("pause");
	return 0;
}