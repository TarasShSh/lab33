// lab33.cpp
// Шевченко Тарас
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 23
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу

	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= -7 - R)
		y = R;
	else if (x > -7 - R && x <= -7 + R)
		y = R - sqrt(pow(R, 2) - pow(x, 2) - 14 * x - 49);
	else if (x > -7 + R && x <= -4)
		y = R;
	else if (x > -4 && x <= 0)
		y = -(R * x) / 4.;
	else if (x > 0 && x <= acos(-1))
		y = sin(x);
	else
		y = x - acos(-1);

	cout << endl;
	cout << "y = " << y << endl;
}