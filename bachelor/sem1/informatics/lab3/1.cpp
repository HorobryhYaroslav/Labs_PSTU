#include <iostream>
#include <clocale>
#include <cmath>
using namespace std;

double first_method(double k)
{
    double n = -2 * pow(k,2);
    double answer = n;

    for(int i = 2; i <= 15; i++)
    {
        n = n * ((-4 * pow(k, 2)) / ((2 * i - 1) * (2 * i)));
        answer += n;

    }
    return answer;
}

double second_method(double k)
{
    double n = -2 * pow(k,2);
    double answer = n;

    for(int i = 2; fabs(n) > 0.0001; i++)
    {
        n = n * ((-4 * pow(k, 2)) / ((2 * i - 1) * (2 * i)));
        if (fabs(n) > 0.0001)
        {
            answer += n;
        }
    }
    return answer;
}

int main() 
{
    double a;
    for(double x = 0.1; x <= 1; x += 0.09)
    {
        a = 2 * (pow(cos(x),2) - 1) ;
        cout << "cos x = " << a << " a) " << first_method(x) << " b)" << second_method(x) << " x: " << x << endl;
    }
    return 0;
}