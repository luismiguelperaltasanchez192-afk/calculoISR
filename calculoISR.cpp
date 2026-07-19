#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    double sueldoMensual, sueldoAnual;
    double isrAnual = 0, isrMensual = 0;

    cout << "==========================================" << endl;
    cout << "     CALCULADORA DE ISR - REP. DOM." << endl;
    cout << "==========================================" << endl;

    cout << "Ingrese el sueldo mensual: RD$ ";
    cin >> sueldoMensual;

    sueldoAnual = sueldoMensual * 12;

    if (sueldoAnual <= 416220.00)
    {
        isrAnual = 0;
    }
    else if (sueldoAnual <= 624329.00)
    {
        isrAnual = (sueldoAnual - 416220.00) * 0.15;
    }
    else if (sueldoAnual <= 867123.00)
    {
        isrAnual = 31216.00 + (sueldoAnual - 624329.00) * 0.20;
    }
    else
    {
        isrAnual = 79776.00 + (sueldoAnual - 867123.00) * 0.25;
    }

    isrMensual = isrAnual / 12;

    cout << fixed << setprecision(2);

    cout << "\n========== RESULTADOS ==========" << endl;
    cout << "Sueldo mensual : RD$ " << sueldoMensual << endl;
    cout << "Sueldo anual   : RD$ " << sueldoAnual << endl;
    cout << "ISR anual      : RD$ " << isrAnual << endl;
    cout << "ISR mensual    : RD$ " << isrMensual << endl;

    if (isrAnual == 0)
    {
        cout << "No aplica ISR." << endl;
    }

    return 0;
}