/**********************
*ФИО: Шамин А.С   *
*Дата: 06.10.2026   *
*Группа: ПИ-261      *
**********************/

#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    double d = 0.02;
    double n1 = 1;
    double n2 = 1.5;
    double c = 300000000;
    double pi = 3.1415926535;

    double v = c / n2;

    double alpha[] = {0, 5, 10, 15, 20, 30, 40, 50, 60};

    for (int i = 0; i < 9; i++)
    {
        double a = alpha[i] * pi / 180;

        double beta = asin(n1 / n2 * sin(a));

        double time = d / (v * cos(beta));

        beta = beta * 180 / pi;

        time = time * 1000000000;

        cout << alpha[i] << "  "
             << beta << "  "
             << time << endl;
    }

    return 0;
}