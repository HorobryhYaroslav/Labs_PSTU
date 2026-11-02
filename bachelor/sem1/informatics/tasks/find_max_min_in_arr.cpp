#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

    int ln = 1, number;
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
        cin >> number;
        mas[i] = number;
    }

    int max_val = mas[0], min_val = mas[0];
    int index_max = 0, index_min = 0;


    for (int i = 1; i < ln; i++)
    {
        if (mas[i] > max_val)
        {
            max_val = mas[i];
            index_max = i;
        }
        if (mas[i] < min_val)
        {
            min_val = mas[i];
            index_min = i;
        }
    }

    int count_max = 0, count_min = 0;
    for (int i = 0; i < ln; i++)
    {
        if (mas[i] == max_val)
        {
            count_max++;
        }
        if (mas[i] == min_val)
        {
            count_min++;
        }
    }

    if (max_val == min_val)
    {
        cout << "\nВсе элементы массива одинаковы и равны: " << max_val << endl;
        cout << "Индекс первого встретившегося элемента: 0, Номер: 1" << endl;
        cout << "Общее количество таких элементов: " << count_max << endl;
    }
    else
    {
        cout << "\nМаксимальный элемент: " << max_val << endl;
        cout << "Индекс первого макс: " << index_max << ", Номер: " << index_max + 1 << endl;
        cout << "Количество максимальных элементов: " << count_max << endl;

        cout << "\nМинимальный элемент: " << min_val << endl;
        cout << "Индекс первого мин: " << index_min << ", Номер: " << index_min + 1 << endl;
        cout << "Количество минимальных элементов: " << count_min << endl;
    }

    return 0;
}
