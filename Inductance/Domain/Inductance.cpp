#include "Inductance.h"

Inductance::Inductance(double inductance, double current)
    : L(inductance), I(current)
{
    if (L < 0)
        throw std::invalid_argument("Индуктивность не может быть отрицательной.");
}

void Inductance::SetInductance(double inductance)
{
    if (inductance < 0)
        throw std::invalid_argument("Индуктивность не может быть отрицательной.");
    L = inductance;
}

void Inductance::SetCurrent(double current)
{
    I = current;
}

double Inductance::GetInductance() const
{
    return L;
}

double Inductance::GetCurrent() const
{
    return I;
}

double Inductance::CalculateEnergy() const
{
    return 0.5 * L * I * I;
}

std::ostream& operator<<(std::ostream& out, const Inductance& inductance)
{
    out << "Индуктивность: " << inductance.L << " Гн, Ток: " << inductance.I << " А";
    return out;
}

std::istream& operator>>(std::istream& in, Inductance& inductance)
{
    std::cout << "Введите индуктивность (Гн): ";
    in >> inductance.L;
    if (inductance.L < 0)
        throw std::invalid_argument("Индуктивность не может быть отрицательной.");

    std::cout << "Введите ток (А): ";
    in >> inductance.I;
    return in;
}
