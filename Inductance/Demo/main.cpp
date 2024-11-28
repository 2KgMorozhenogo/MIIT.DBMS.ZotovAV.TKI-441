#include <iostream>
#include "../Domain/Inductance.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    try
    {
        Inductance inductance;
        std::cin >> inductance;

        std::cout << "Введённые данные: " << inductance << "\n";
        std::cout << "Энергия магнитного поля: "
            << inductance.CalculateEnergy() << " Дж\n";
    }
    catch (const std::exception& ex)
    {
        std::cerr << "Ошибка: " << ex.what() << std::endl;
    }

    return 0;
}
