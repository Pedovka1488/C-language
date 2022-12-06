#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    int a = 2;
    float b = 13.13;
    
    float y = pow(exp(1 - exp(a) / b * cos(b / a * M_PI) + log(0.708) * b), 1./3);
    cout << "Приклад 17: " << y << endl;
    
    a = 2;
    b = 3.141;
    
    y = pow(0.315 * log(a) / 1 + pow(0.711 * log(b) / 1 + pow(log(b / a), 1./3), 1./3), 1./3);
    cout << "Приклад 22: " << y << endl;
    
    return 0;
}