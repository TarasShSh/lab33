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
	else if (-7 - R <= x && x <= -7)
		y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));

	else if (-7 <= x && x <= -7 + R)
			y = sqrt(((x - 7) * (x - 7)) + (2 * (R * R)));

	else if (-7 + R <= x && x <= -4)
			y = R;

	else if (-4 <= x && x <= 0)
			y = ((3 / 4) * R);

	else if (0 <= x && x <= ((atan(1) * 4) / 2))
			y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));

	else if (((atan(1) * 4) / 2) <= x && x <= (atan(1) * 4))
			y = sqrt((R * R) - (x - ((atan(1) * 4) / 2) * (atan(1) * 4) / 2));

	else if (x > (atan(1) * 4))
			y = (1 + (sqrt(2) * (atan(1) * 4)));


	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}

