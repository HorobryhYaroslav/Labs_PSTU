#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    int ln = 1;
    int mas[100];

    cout << "Введите длину массива (до 100): ";
    cin >> ln;

    if (ln < 1 || ln > 100)
    {
        cout << "Введена некорректная длина массива" << endl;
        return 1;
    }

    for (int i = 0; i < ln; i++)
    {
        cout << "Введите число a[" << i << "] = ";
        cin >> mas[i];
    }

    if (ln == 1)
    {
        cout << "\nМассив упорядочен по возрастанию" << endl;
        return 0;
    }

    bool all_equal = true;
    for (int i = 0; i < ln - 1; i++)
    {
        if (mas[i] != mas[i + 1])
        {
            all_equal = false;
            break;
        }
    }

    if (all_equal)
    {
        cout << "\nВсе элементы массива одинаковы. Массив не является возрастающим" << endl;
        return 0;
    }

    bool f = false;
    int i = 0;

    while (i < ln - 1 && !f)
    {
        if (mas[i] >= mas[i + 1])
        {
            f = true;
        }
        else
        {
            i++;
        }
    }

    if (!f)
    {
        cout << "\nМассив упорядочен по возрастанию" << endl;
    }
    else
    {
        cout << "\nМассив НЕ упорядочен по возрастанию" << endl;
    }

    return 0;
}
