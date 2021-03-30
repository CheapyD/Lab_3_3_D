#include "pch.h"
#include "CppUnitTest.h"
#include "../Lab_3_3_D/Triangle_Public.cpp"
#include "../Lab_3_3_D/Triangle_Private.cpp"
#include "../Lab_3_3_D/Triad.cpp"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace Labtest33D
{
	TEST_CLASS(Labtest33D)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Triangle_Private T(3, 4, 5);
			Assert::AreEqual(T.Square(), 6.0);
		}

		TEST_METHOD(TestMethod2)
		{
			Triangle_Public K(5, 5, 5);
			Assert::AreEqual(K.Sum(), 15.0);
		}
	};
}
