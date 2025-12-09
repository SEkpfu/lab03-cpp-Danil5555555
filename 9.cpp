#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int num, max_val = 0, count_max = 0;

    cout << "Введите последовательность (0 для завершения):" << endl;

    do
    {
        cin >> num;

        if (num != 0)
        {
            if (num > max_val)
            {
                max_val = num;
                count_max = 1;
            }
            else if (num == max_val)
            {
                count_max++;
            }
        }
    } while (num != 0);

    cout << "Количество элементов, равных максимальному ("
         << max_val << "): " << count_max;

    return 0;
}
