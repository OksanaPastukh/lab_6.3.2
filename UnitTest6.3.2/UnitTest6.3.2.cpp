#include "pch.h"
#include "CppUnitTest.h"
#include "../Project6.3.2/project6.3.2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest632
{
	TEST_CLASS(UnitTest632)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int c;
			int n = 10;
			int i = 0;
			int p[10] = { -1,3,4,-2,-7,6,-3,4,-5,9 };
			c = Count(p, n, i);
			Assert::AreEqual(c, 5);
		}
		TEST_METHOD(TestMethod2)
		{
			int c;
			int n = 10;
			int i = 0;
			int p[10] = { -1,-8,4,-2,-7,6,-3,4,-5,9 };
			c = Count_1(p, n, i);
			Assert::AreEqual(c, 6);
		}
	};
}
