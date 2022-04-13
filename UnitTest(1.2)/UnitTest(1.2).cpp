#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab(1.2)/Матриця.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest12
{
	TEST_CLASS(UnitTest12)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Матриця m;
			m.Init(8, 4);
			Assert::AreEqual(6, m.getValueByIndex(4, 2));
		}
	};
}
