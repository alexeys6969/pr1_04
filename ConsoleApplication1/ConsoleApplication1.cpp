// ConsoleApplication1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <locale>
#include <math.h>

int main()
{
    setlocale(0, "");
    //Первое задание
    float x, y, result;
    std::cout << "Введите x:\n";
    std::cin >> x;

    std::cout << "Введите y:\n";
    std::cin >> y;

    result = x * log(x) + (y / (cos(x) - (x / 3.0f)));
    std::cout << "Результат первого выражения:\n";
    std::cout << result << std::endl;

    Второе задание
    float longOfSquare, volume, square;
    std::cout << "Введите длину стороны куба:\n";
    std::cin >> longOfSquare;

    volume = pow(longOfSquare, 3);
    square = 6 * pow(longOfSquare, 2);
    std::cout << "Объем куба: ";
    std::cout << volume << std::endl;
    std::cout << "Площадь куба: ";
    std::cout << square << std::endl;

    //Третье задание
    float radius, high, volumeCilindr, squareCilindr, pi;
    std::cout << "Введите радиус цилиндра:\n";
    std::cin >> radius;
    std::cout << "Введите высоты цилиндра:\n";
    std::cin >> high;
    volumeCilindr = 3.14159f * pow(radius, 2) * high;
    squareCilindr = 2 * 3.14159f * radius * (radius + high);
    std::cout << "Объем цилиндра: ";
    std::cout << volumeCilindr << std::endl;
    std::cout << "Площадь цилиндра: ";
    std::cout << squareCilindr << std::endl;

    //Четвертое задание
    double principal;
    double annual_rate;
    int days;
    const int days_in_year = 365;

    std::cout << "Введите сумму вклада (руб.): ";
    std::cin >> principal;

    std::cout << "Введите годовую процентную ставку (%): ";
    std::cin >> annual_rate;

    std::cout << "Введите количество дней вклада: ";
    std::cin >> days;

    double income = (principal * annual_rate * days) / (days_in_year * 100);

    double total_amount = principal + income;

    std::cout << std::fixed;
    std::cout << "Результаты расчета\n";
    std::printf("Величина дохода: %.2f руб.\n", income);
    std::printf("Итоговая сумма (вклад + доход): %.2f руб.\n", total_amount);

    //Пятое задание
    std::cout << std::boolalpha;

    double x, y;
    std::cout << "Введите координаты точки (x и y): ";
    std::cin >> x >> y;

    bool is_inside = (x >= 0) && (y >= 0) && (5 * x + 6 * y <= 30) && (3 * x + 2 * y >= 6);

    std::cout << "Результат: " << is_inside << std::endl;
}

