﻿#include "pch.h"
#include "CppUnitTest.h"
#include "../Source.cpp"


using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
		
		TEST_METHOD(TestMethod1)
		{
			Assert::AreEqual(WholePart1(5, 2), 2);
		}
	};
}
