#include <iostream>
#include <clocale>

using namespace std;

void selection_sort(int arr[], int size)
{
    int minIndex, temp;
    for (int i = 0; i < size - 1; i++)
    {
        minIndex = i;

        for(int k = i; k < size; k++)
        {
            if (arr[k] < arr[minIndex])
            {
                minIndex = k;
            }
        }

        if (minIndex != i)
        {
            temp = arr[i];
            arr[i] = arr[minIndex];
            arr[minIndex] = temp;
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

    selection_sort(mas,ln);
    
    cout << "Отсортированный массив:" << endl;
    for(int i = 0; i < ln; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;

    return 0;
}