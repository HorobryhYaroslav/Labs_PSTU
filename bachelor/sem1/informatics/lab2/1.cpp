#include <iostream>
#include <clocale>
#include <cmath>

using namespace std;

int fact(int a) 
{
    int b = 1;
    for(int k = 1; k <= a; k++)
    {
        b *= k;
    }
    return b;
}

int main() 
{
    setlocale(LC_ALL,".65001");
    float answer = 0;
    float k;
    for(int i = 1; i <= 10; i++)
    {
        k = fact(i) / pow(i,sqrt(i));
        answer += k;
    }
    cout << "Ответ:" << answer << endl;
}