#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB_5.5/lab_5.5.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
    TEST_CLASS(UnitTest1)
    {
    public:

        TEST_METHOD(TestSumOfDigits)
        {
            Assert::AreEqual(10, sumOfDigits(1234));
        }

        TEST_METHOD(TestCountOfDigits)
        {
            Assert::AreEqual(4, countOfDigits(1234));
        }

        TEST_METHOD(TestMaxDigit)
        {
            Assert::AreEqual(4, maxDigit(1234, INT_MIN));
        }

        TEST_METHOD(TestMinDigit)
        {
            Assert::AreEqual(1, minDigit(1234, INT_MAX));
        }

        TEST_METHOD(TestCalculateDepth)
        {
            Assert::AreEqual(4, calculateDepth(1234));
        }
    };
}
