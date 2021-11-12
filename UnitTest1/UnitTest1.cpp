#include "pch.h"
#include "CppUnitTest.h"
#include "../lab6.2_rekur/lab6.2_rekur.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			const int n = 9;
			int a[n] = { 3, -4 ,78,4,33,-53,1,23,4,};
			int c;
			c = Count(a, n, 0, 0);
			Assert::AreEqual(5, c);
		}
	};
}
