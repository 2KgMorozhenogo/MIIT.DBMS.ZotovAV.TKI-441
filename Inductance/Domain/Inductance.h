#pragma once
#include <iostream>
#include <stdexcept>

class Inductance
{
private:
    double L;  // Индуктивность (Генри)
    double I;  // Ток (Амперы)

public:
    Inductance(double inductance = 0.0, double current = 0.0);

    void SetInductance(double inductance);
    void SetCurrent(double current);
    double GetInductance() const;
    double GetCurrent() const;
    double CalculateEnergy() const;

    friend std::ostream& operator<<(std::ostream& out, const Inductance& inductance);
    friend std::istream& operator>>(std::istream& in, Inductance& inductance);
};
