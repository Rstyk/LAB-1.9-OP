#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 1.7 op/Point.h"
#include "../lab 1.7 op/Point.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace lab17labb
{
	TEST_CLASS(lab17labb)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Point p;
			Assert::IsTrue(p.init(1.0, 2.0));
			Assert::AreEqual(1.0, p.getX());
			Assert::AreEqual(2.0, p.getY());

		}
	};
}
