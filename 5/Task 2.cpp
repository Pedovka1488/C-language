#include <iostream>
#include <math.h>

using namespace std;

int main()
{
    for (int a = 10; a <= 20; a++) {
        float b = 0;
        b += sqrt(a);

        cout << b << "\n";
    }

    return 0;
}