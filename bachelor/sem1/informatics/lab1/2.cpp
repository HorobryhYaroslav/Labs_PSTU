#include <iostream>
#include <clocale>

using namespace std;

int main() {
    setlocale(LC_ALL,".65001");

    int n;
    int m;

    cout << "Введите n: ";
    cin >> n;

    cout << "Введите m: ";
    cin >> m;

    cout << "1. " << (n-- - m) << endl;
    cout << "2. " << (m-- < n) << endl;
    cout << "3. " << (n++ > m) << endl;

    return 0;


}