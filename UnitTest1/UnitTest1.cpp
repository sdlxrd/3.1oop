#include "pch.h"
#include "CppUnitTest.h"
#include "C:\Users\Misha\source\repos\3.1oop\3.1oop\Number.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Number a;
			a.setNumber(2);
			Assert::AreEqual(2., a.getNumber());
		}
	};
}
