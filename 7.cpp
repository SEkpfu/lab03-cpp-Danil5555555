#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    setlocale(0, "");

    int n;
    cout << "Введите количество вершин: ";
    cin >> n;

    double perimeter = 0;
    double first_x, first_y, prev_x, prev_y;

    cout << "Введите координаты вершин:" << endl;
    for (int i = 0; i < n; i++)
    {
        double x, y;
        cout << "Вершина " << i+1 << ": ";
        cin >> x >> y;

        if (i == 0)
        {
            first_x = x;
            first_y = y;
        }
        else
        {
            perimeter += sqrt(pow(x - prev_x, 2) + pow(y - prev_y, 2));
        }

        prev_x = x;
        prev_y = y;
    }

    perimeter += sqrt(pow(first_x - prev_x, 2) + pow(first_y - prev_y, 2));
    cout << "Периметр: " << perimeter;

    return 0;
}
