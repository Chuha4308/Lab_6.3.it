#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_6.3.it/Lb_6.3.it.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestMethod1)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            create(arr, SIZE, MIN, MAX);
            Assert::AreEqual(7, CountPositive(arr, SIZE), 0.00001);
        }

        TEST_METHOD(TestMethod2)
        {
            const int SIZE = 20;
            int arr[SIZE]{};
            int MIN = -20;
            int MAX = 20;
            SecondCreate(arr, SIZE, MIN, MAX);
            Assert::AreEqual(10, SecondCountPositive(arr, SIZE), 0.00001);
        }
    };
}
