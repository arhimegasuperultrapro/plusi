#include <iostream>
#include <cmath>

using namespace std;

int main() {
    // Ввод данных
    double a, b;
    cout << "Введите длину первого катета (a): ";
    cin >> a;
    cout << "Введите длину второго катета (b): ";
    cin >> b;

    // Вычисление гипотенузы
    double c = sqrt(a * a + b * b);

    // Вычисление периметра
    double perimeter = a + b + c;

    // Вычисление площади
    double area = (a * b) / 2;

    // Вывод результатов
    cout << "Гипотенуза (c): " << c << endl;
    cout << "Периметр (P): " << perimeter << endl;
    cout << "Площадь (S): " << area << endl;

    return 0;
}
