#include <iostream>
#include <cmath>

using namespace std;

// Функція для обчислення відстані між двома точками
double distance(double x1, double y1, double x2, double y2) {
    return sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));
}

int main() {
    // Координати точок
    double xA, yA, xB, yB, xC, yC;
    
    cout << "Введіть координати точки A (x y): ";
    cin >> xA >> yA;
    
    cout << "Введіть координати точки B (x y): ";
    cin >> xB >> yB;
    
    cout << "Введіть координати точки C (x y): ";
    cin >> xC >> yC;

    // Обчислюємо відстані
    double dAB = distance(xA, yA, xB, yB);
    double dAC = distance(xA, yA, xC, yC);

    // Визначаємо, яка точка ближче і виводимо результат
    if (dAB < dAC) {
        cout << "Точка B розташована ближче до A на відстані " << dAB << endl;
    } else {
        cout << "Точка C розташована ближче до A на відстані " << dAC << endl;
    }

    return 0;
}