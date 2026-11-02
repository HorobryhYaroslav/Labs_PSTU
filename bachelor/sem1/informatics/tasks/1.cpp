#include <iostream>
#include <clocale>

using namespace std;

int main()
{
    setlocale(LC_ALL,".65001");
    int N, a, i;
    i = 1;
    bool f = false;
    cin >> N;
    while ((i <= N) && !f) 
    {
        cin >> a;
        if (a == 0) 
        {
            i += 1;
        }
        else
        {
            f = true;
        }
    }
    if (f)
    {
        if (a > 0)
        {
            cout << "a = " << a << " - положительное";
        }
        else
        {
            cout << "a =" << a << " - отрицательное";
        }
    }
    else
    {
        cout << "Все нули";
    }
    return 0;

}