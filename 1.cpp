#include <iostream>
#include <cmath>
#define _USE_MATH_DEFINES
using namespace std;

int main()
{
    setlocale(0, "");

    cout << "a). Температура Цельсия - Фаренгейт:" << endl;
    int tC = 0;
    while (tC <= 100)
    {
        double tF = (9.0/5.0) * tC + 32;
        cout << tC << "°C = " << tF << "°F" << endl;
        tC += 10;
    }

    cout << "\nb). y = ln(x+1)*sin(x):" << endl;
    double x = 0;
    do
    {
        double y = log(x + 1) * sin(x);
        cout << "x = " << x << ", y = " << y << endl;
        x += 0.5;
    } while (x <= 5);

    cout << "\nc). y = cos(x):" << endl;
    double step = M_PI / 6;
    for (double x2 = 0; x2 <= 2 * M_PI + 0.0001; x2 += step)
    {
        double y = cos(x2);
        cout << "x = " << x2 << ", y = " << y << endl;
    }

    cout << "\nd). Кусочно-заданная функция:" << endl;
    for (double x3 = -1.5; x3 <= 1.5 + 0.0001; x3 += 0.25)
    {
        double y;
        if (x3 > 1)
            y = 1 + sqrt(cos(x3));
        else if (x3 >= -0.5)
            y = x3 + 1;
        else
            y = 1 - x3*x3;
        cout << "x = " << x3 << ", y = " << y << endl;
    }

    return 0;
}
