#include <iostream>
#include <clocale>

using namespace std;

void insert_sort(int arr[], int size)
{
    for(int i = 1; i < size; i++)
    {
        int key = arr[i];
        int j = i - 1;

        while (j >= 0 && arr[j] > key)
        {
            arr[j + 1] = arr[j];
            j--;
        }
        arr[j + 1] = key;
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

    insert_sort(mas,ln);
    
    cout << "Отсортированный массив:" << endl;
    for(int i = 0; i < ln; i++)
    {
        cout << mas[i] << " ";
    }
    cout << endl;

    return 0;
}