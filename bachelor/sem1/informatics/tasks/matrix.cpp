#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");

    int number, mas[2][3];

    cout << "Введите значения для матрицы:" << endl;

    for(int i = 0; i < 2; i++)
    {
        for(int k = 0; k < 3; k++ )
        {
            cout << "Введите значение для " << i + 1 << " строки, " << k + 1 << " столбца ";
            cin >> number;
            mas[i][k] = number; 
        }
    }

    int sum = 0;

    cout << "Итоговая матрица:" << endl;
    for (int i = 0; i < 2; i++)
    {
        cout << "[";
        for (int k = 0; k < 3; k++)
        {
            cout << mas[i][k] << " ";
            sum += mas[i][k];
        }
        cout << "]" << " Сумма строки: " << sum << endl;
        sum = 0;
    }


    return 0;
}