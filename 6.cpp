#include <iostream>
using namespace std;

int main()
{
    setlocale(0, "");

    int count = 0, even_count = 0;
    char choice;

    do
    {
        int num;
        cout << "Введите число: ";
        cin >> num;

        count++;
        if ((num & 1) == 0) even_count++;

        cout << "Продолжить? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << "Общее количество чисел: " << count << endl;
    cout << "Количество четных чисел: " << even_count;

    return 0;
}
