#include <iostream>

using namespace std;

int main() {
    float x, y;

    cout << "Введіть кординати точки(x y) :";
    cin >> x >> y;

    if (x / 2 + y / 2 <= 0.5 && x >= 0 && y >= 0 ||
        -x / 2 + y / 2 <= 0.5 && x <= 0 && y >= 0 ||
        x / 2 + -y / 2 <= 0.5 && x >= 0 && y <= 0)
        cout << "Точка потрапила в задану область";
    else
        cout << "Точка не потрапила в задану область";
}