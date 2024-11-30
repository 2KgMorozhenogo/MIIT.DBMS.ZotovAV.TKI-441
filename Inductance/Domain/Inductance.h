#pragma once
#include <iostream>
#include <stdexcept>

/**

 * @class Inductance
 * @brief Класс для представления индуктивности и тока.
 * Класс Inductance позволяет задавать и получать значения индуктивности
 * и тока, а также вычислять энергию, хранящуюся в индуктивности.
 */
class Inductance
{
private:
    double L;  // Индуктивность (Генри)
    double I;  // Ток (Амперы)

public:
    /**
     * @brief Конструктор класса Inductance.
     * @param inductance Значение индуктивности в Генри (Гн), по умолчанию 0.0.
     * @param current Значение тока в Амперах (А), по умолчанию 0.0.
     */
    Inductance(double inductance = 0.0, double current = 0.0);

    /**
     * @brief Устанавливает новое значение индуктивности.
     * @param inductance Новое значение индуктивности в Генри (Гн).
     * @throws std::invalid_argument Если значение индуктивности отрицательное.
     */
    void SetInductance(double inductance);

    /**
     * @brief Устанавливает новое значение тока.
     * @param current Новое значение тока в Амперах (А).
     */
    void SetCurrent(double current);

    /**
     * @brief Получает текущее значение индуктивности.
     * @return Текущее значение индуктивности в Генри (Гн).
     */
    double GetInductance() const;

    /**
     * @brief Получает текущее значение тока.
     * @return Текущее значение тока в Амперах (А).
     */
    double GetCurrent() const;

    /**
     * @brief Вычисляет энергию, хранящуюся в индуктивности.
     * @return Энергия в Джоулях (Дж), вычисленная по формуле
     * E = 0.5 * L * I^2.
     */
    double CalculateEnergy() const;

    /**
     * @brief Перегруженный оператор вывода для класса Inductance.
     * @param out Поток вывода.
     * @param inductance Объект класса Inductance.
     * @return Поток вывода.
     */
    friend std::ostream& operator<<(std::ostream& out, const Inductance& inductance);

    /**

     * @brief Перегруженный оператор ввода для класса Inductance.
     * Запрашивает у пользователя ввод значений индуктивности и тока.
     * @param in Поток ввода.
     * @param inductance Объект класса Inductance.
     * @return Поток ввода.
     * @throws std::invalid_argument Если значение индуктивности отрицательное.
    */
    friend std::istream& operator>>(std::istream& in, Inductance& inductance);
};
