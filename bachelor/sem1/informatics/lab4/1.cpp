#include <iostream>
#include <clocale>
#include <cstdlib>

using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");

    // 1) Реализация массива
    int ln = 1, number;
    int mas[100];

    cout << "Введите длину массива: ";
    cin >> ln;

    if (ln < 1 || ln > 100)
    {
        cout << "Введена некорректная длина массива" << endl;
        return 1;
    }

    for(int i = 0; i < ln; i++)
    {
        cout << "Введите число a[" << i << "] = ";
        cin >> number;
        mas[i] = number;
    }

    //2) Вывод массива по кольцу влево

    int K;

    cout << "Введите номер K - элемента (1 - " << ln << "): ";
    cin >> K;

    if (K < 0 || K > ln)
    {
        cout << "Введён некорректный номер элемента";
        return 1;
    }
    cout << "Вывод массива по кольцу влево:" << endl;

    for(int i = K; i < K + ln; i++)
    {
        cout << mas[(i - 1 + ln) % ln] << " ";
    }
    cout << endl;

    //3) Удаление всех элементов совпадающих с максимальным знач.

    //Поиск максимального
    int max = 0;

    for (int i = 0; i < ln; i++)
    {
        if (max < mas[i])
        {
            max = mas[i];
        }
    }

    //Удаление равных максимальному
    int i = 0;
    while (i < ln)
    {
        if (mas[i] == max)
        {
            ln -= 1;
            for(int k = 0; k < ln; k++)
            {
                mas[i] = mas[i + 1];
            }
        }
        else
        {
            i++;
        }
    }
    if (ln == 0)
    {
        cout << "Массив стал пустым" << endl;
        return 1;
    }
    //4)Вывод массива по кольцу вправо
    if (K > ln)
    {
        K = ln - 1;
    }

    cout << "Вывод массива по кольцу вправо:" << endl;
    for(int j = K; j < K + ln; j++)
    {
        cout << mas[(j - 1) % ln] << " ";
    }

    return 0;
}
