#include "pch.h"
#include "CppUnitTest.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

int foo(int a, int b)
{
	return a + b;
}

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			int y = foo(8, 6);
			Assert::AreEqual(14, y);
		}
	};
}
