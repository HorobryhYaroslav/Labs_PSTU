#include <iostream>
#include <clocale>

using namespace std;


void bubble_sort(int arr[], int size)
{
    for(int i = 0; i < size - 1; i++)
    {
        for(int k = 0; k < size - 1; k++)
        {
            if (arr[k] > arr[k + 1])
            {
                int temp = arr[k];
                arr[k] = arr[k + 1];
                arr[k + 1] = temp;
            }
        }
    }
}


int main() 
{
    setlocale(LC_ALL,".65001");

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

    bubble_sort(mas, ln);

    cout << "Отсортированный массив:" << endl;
    for(int i = 0; i < ln; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;

    return 0;
}
