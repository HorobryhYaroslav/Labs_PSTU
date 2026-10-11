#include <iostream>
using namespace std;


float ff(float a, float b){

    float c = a + b;
    float d = c * c * c;

    float e = a * a * a;
    float f = 3 * a * a * b;
    float g = e + f;

    float h = d - g;
   
    float i = 3 * a * b * b;
    float j = b * b * b;

    float k = i + j;

    float answer = h / k;
    return answer; 
}

double dd(double a, double b){

    double c = a + b;
    double d = c * c * c;

    double e = a * a * a;
    double f = 3 * a * a * b;
    double g = e + f;

    double h = d - g;

    double i = 3 * a * b * b;
    double j = b * b * b;

    double k = i + j;

    double answer = h / k;
    return answer;
}

int main() {
    
    cout << "float result: " << ff(1000, 0.0001) << endl;
    cout << "double result: " << dd(1000, 0.0001) << endl;

    return 0;

}