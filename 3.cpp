#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");
    int n;
    cout << "Введите n: ";
    cin >> n;

    double sum = 0;
    for (int i = 1; i <= n; i++)
    {
        sum += 1.0 / (2 * i);
    }

    cout << "S = " << sum;
    return 0;
}
