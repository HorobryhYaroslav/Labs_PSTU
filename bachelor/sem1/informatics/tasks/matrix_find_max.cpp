#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL, ".65001");

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

    int max_matrix = mas[0][0];
    int max_row_idx = 0;
    int max_col_idx = 0;
    bool all_matrix_equal = true;

    for (int i = 0; i < 2; i++)
    {
        for (int k = 0; k < 3; k++)
        {
            if (mas[i][k] != max_matrix)
            {
                all_matrix_equal = false;
            }

            if (mas[i][k] > max_matrix)
            {
                max_matrix = mas[i][k];
                max_row_idx = i;
                max_col_idx = k;
            }
        }
    }

    if (all_matrix_equal)
    {
        cout << "\nВсе элементы матрицы одинаковы и равны: " << max_matrix << endl;
    }
    else
    {
        cout << "\nМаксимальный элемент в матрице: " << max_matrix << endl;
        cout << "Его первые индексы: строка [" << max_row_idx + 1 << "], столбец [" << max_col_idx + 1<< "]" << endl;
    }

    return 0;
}
