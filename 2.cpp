#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int neg_count = 0, sum_2digit = 0, min_val;
    cout << "Введите 7 целых чисел: ";

    for (int i = 0; i < 7; i++)
    {
        int num;
        cin >> num;

        if (num < 0) neg_count++;

        if (num >= 10 && num <= 99 || num <= -10 && num >= -99)
            sum_2digit += num;

        if (i == 0) min_val = num;
        else if (num < min_val) min_val = num;
    }

    cout << "a) Количество отрицательных чисел: " << neg_count << endl;
    cout << "b) Сумма двузначных чисел: " << sum_2digit << endl;
    cout << "c) Наименьшее число: " << min_val << endl;

    return 0;
}
