#include "pch.h"
#include "CppUnitTest.h"
#include "../lab5_2.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double z;
			z = A(0.5, 1, 12.0);
			Assert::AreEqual(z, 1.0);
		}
	};
}
