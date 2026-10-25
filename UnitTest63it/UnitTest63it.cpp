#include "pch.h"
#include "CppUnitTest.h"
#include "../lab063it/lab063it.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest63Iter
{
    TEST_CLASS(UnitTest63Iter)
    {
    public:

        TEST_METHOD(TestMinOddIndex)
        {
            int a[5] = { 4, -7, 9, 0, -3 };
            Assert::AreEqual(1, MinOddIndex(a, 5));
        }

        TEST_METHOD(TestNoOdd)
        {
            int a[3] = { 2, 4, 6 };
            Assert::AreEqual(-1, MinOddIndex(a, 3));
        }
    };
}
