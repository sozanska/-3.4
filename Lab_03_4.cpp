#include <iostream>

using namespace std;

int main()
{
	double x;  // вхідний аргумент
	double y;  // вхідний аргумент
	double R;  // вхідний параметр

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;
	cout << "y = "; cin >> y;

	// розгалуження в повній формі
	if (((x * x + y * y) <= pow(R, 2) && y >= 0) || (y >= -R && x >= y && x <= 0))
		cout << "yes" << endl;
	else
		cout << "no" << endl;

	cin.get();
	return 0;
}
