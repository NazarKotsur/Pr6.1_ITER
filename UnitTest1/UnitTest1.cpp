#include "pch.h"
#include "CppUnitTest.h"
#include "../Pr6.1ITER/Pr6.1.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest
{
    TEST_CLASS(UnitTest)
    {
    public:

        TEST_METHOD(TestFillArray)
        {
            int myArray[20];
            fillArray(myArray);

            for (int i = 0; i < 20; ++i) {
                Assert::IsTrue(myArray[i] >= -20 && myArray[i] <= 50);
            }
        }

        TEST_METHOD(TestProcessArray)
        {
            int myArray[20] = { 20, 25, 30, 35, 40, 45, 50, 55, 60, 65, 70, 75, 80, 85, 90, 95, 100, 105, 110, 115 };
            int count, sum;

            processArray(myArray, count, sum);

            Assert::AreEqual(0, count);
            Assert::AreEqual(0, sum);

            for (int i = 0; i < 20; ++i) {
                if (!(myArray[i] > 0 || myArray[i] % 5 == 0)) {
                    Assert::AreEqual(0, myArray[i]);
                }
            }
        }
    };
}
