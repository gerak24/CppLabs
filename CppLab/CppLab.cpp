#include <clocale>
#include <iomanip>
#include <iostream>
using namespace std;

void lab1(), lab2(), lab3(int a1, int a2), lab3(int a1, int a2, int a3), lab4(), lab5();

int main()
{
    setlocale(LC_ALL, "Rus"); // NOLINT(cert-err33-c, concurrency-mt-unsafe)
    cout << "Вы в меню лабораторных, для выбора лаборатоной введите числа 1-5:\n"
        "Q - Для завержжения работы.\n";
    char entrypoint;
    cin >> entrypoint;
    while (entrypoint != 'Q')
    {
        switch (entrypoint)
        {
        case '1':
            lab1();
            break;
        case '2':
            lab2();
            break;
        case '3':
            cout << "Выберите 2 или 3 числа сравнивать: ";
            int count, a1, a2;
            cin >> count;
            while (count != 2 && count != 3)
            {
                cout << "Выберите 2 или 3 числа сравнивать: ";
                cin >> count;
            }
            if (count == 2)
            {
                cout << "Введите 2 числа для сравнения \n";
                cin >> a1 >> a2;
                lab3(a1, a2);
            }
            if (count == 3)
            {
                int a3;
                cout << "Введите 3 числа для сравнения \n";
                cin >> a1 >> a2 >> a3;
                lab3(a1, a2, a3);
            }
            break;
        case '4':
            lab4();
            break;
        case '5':
            lab5();
            break;
        case 'Q':
            return 0;
        default:
            break;
        }
        cout << "Для продолжения введите числа 1-5, введите Q - Для завержжения работы.\n";
        cin >> entrypoint;
    }
}

void lab1()
{
    float x, y, s;
    cout << "Решение системы уравнений: \n"; //Мне впадлу рисовать в консоли систему уравнений, извините
    cout << "Введите число X: ";
    cin >> x;
    cout << "Введите число Y: ";
    cin >> y;
    if (x * y > 0)
    {
        s = pow(x + y, 2) - cbrt(abs(x));
        //pow(x + y, 2) и pow(x, 2) + 2 * x * y + pow(y, 2) дадут один и тот же результат
        cout << "(" << x << "+" << y << ")^2 - 3^√|" << x << "| = " << s << "\n";
    }
    else if (x * y < 0)
    {
        s = pow(x + y, 2) + sin(x);
        cout << "(" << x << "+" << y << ")^2 + sin(" << x << ") = " << s << "\n";
    }
    else
    {
        s = pow(x + y, 2) + pow(y, 3);
        cout << "(" << x << "+" << y << ")^2 + " << y << "^3 = " << s << "\n";
    }
}

void lab2()
{
    const float h = 0.1, b = 1.2;
    double a = 0.1;
    cout << "Таблица значений y(x) при x = 0.1 -> 1.2, с шагом 0.1, при функции x^n-1/2n+1 : \n";
    cout << "    x         y\n";
    cout << "----------------------\n";
    for (int i = 1; a <= b; i++)
    {
        double y = pow(a, i - 1) / (2 * i + 1);
        cout << "|" << setw(5) << a << " | " << setw(11) << y << " |\n";
        a += h;
    }
    cout << "----------------------\n";
}

void lab3(int a1, int a2)
{
    int minimum = min(a1, a2);
    cout << "Минимальное значение: " << minimum << "\n";
}

void lab3(int a1, int a2, int a3)
{
    int minimum = min(a1, a2);
    minimum = min(minimum, a3);
    cout << "Минимальное значение: " << minimum << "\n";
}

void lab4()
{
}

void lab5()
{
}
