#include "pch.h"
#include "CppUnitTest.h"
#include "../lab 9.2(A)/lab 9.2(A).cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest92A
{
	TEST_CLASS(UnitTest92A)
	{
	public:

		TEST_METHOD(TestMethod1)
		{
			Student* p = new Student[1];
			p->prizv = "Matus";
			p->inform = 5;
			p->math = 4;
			p->physics = 3;

			bool functionResult = BinSearch(p, 1, "Matus", 3, 4);

			Assert::AreEqual(false, functionResult);
		}
	};
}
