#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    int n;
    double x;
    cout << "Введите n и x: ";
    cin >> n >> x;

    double result1 = cos(x);
    for (int i = 1; i < n; i++)
    {
        result1 = cos(x + result1);
    }
    cout << "a) cos(x+cos(x+...)) = " << result1 << endl;

    double result2 = sqrt(x);
    for (int i = 1; i < n; i++)
    {
        result2 = sqrt(x + result2);
    }
    cout << "b) sqrt(x+sqrt(x+...)) = " << result2;

    return 0;
}
