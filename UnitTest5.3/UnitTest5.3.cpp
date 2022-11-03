#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab 5.4/Source.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest53
{
	TEST_CLASS(UnitTest53)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double m = P0(1, 2);
			Assert::AreEqual(m, 2.25);
		}
	};
}
