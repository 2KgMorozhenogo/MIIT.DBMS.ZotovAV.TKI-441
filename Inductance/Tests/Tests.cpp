#include "pch.h"
#include "CppUnitTest.h"
#include "../Domain/Inductance.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace InductanceTests
{
    TEST_CLASS(InductanceTests)
    {
    public:
        TEST_METHOD(TestCalculateEnergy)
        {
            Inductance inductance(0.5, 2);  // L = 0.5 Гн, I = 2 А
            Assert::AreEqual(1.0, inductance.CalculateEnergy(), 1e-9);
        }

        TEST_METHOD(TestSetInductance)
        {
            Inductance inductance;
            inductance.SetInductance(1.0);
            Assert::AreEqual(1.0, inductance.GetInductance());
        }

        TEST_METHOD(TestNegativeInductance)
        {
            auto func = []() { Inductance inductance(-1.0, 1.0); };
            Assert::ExpectException<std::invalid_argument>(func);
        }
    };
}
