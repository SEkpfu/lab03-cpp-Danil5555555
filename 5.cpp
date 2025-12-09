#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");
    double ep;
    cout << "Введите e: ";
    cin >> ep;

    double sum = 0;
    int sign = 1;
    int d = 1;

    while (true)
    {
        double term = sign * (1.0 / d);
        if (fabs(term) < ep) break;

        sum += term;
        sign = -sign;
        d += 2;
    }

    double pi_ap = sum * 4;
    cout << "Приближение π = " << pi_ap;

    return 0;
}
