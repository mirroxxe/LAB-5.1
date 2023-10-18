#include "pch.h"
#include "CppUnitTest.h"
#include "../LAB№ 5.1/.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace zxc
{
	TEST_CLASS(zxc)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			double p;
			p = f(7);
			Assert::AreEqual(p, 50,43163);
		}
	};
}
