#include <iostream>
#include <string>

using namespace std;

int main() {
    int number;

    cout << "Введіть числовий код групи: ";
    cin >> number;

    switch (number) {
    case 1: cout << "ШІД-21, кількість студентів - 23"; break;
    case 2: cout << "ШІД-22, кількість студентів - 25"; break;
    case 3: cout << "ПД-22, кількість студентів - 25"; break;
    case 4: cout << "ПД-23, кількість студентів - 27"; break;
    case 5: cout << "ІСД-21, кількість студентів - 28"; break;
    case 6: cout << "ІСД-22, кількість студентів - 29"; break;
    case 7: cout << "ІСД-23, кількість студентів - 29"; break;
    default: cout << "Групу, за кодом " << number << ", не знайдено"; break;
    }

    return 0;
}