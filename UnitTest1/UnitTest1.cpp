#include "pch.h"
#include "CppUnitTest.h"
#include "../5.2/5.2.cpp"
using namespace Microsoft::VisualStudio::CppUnitTestFramework;

namespace UnitTest1
{
	TEST_CLASS(UnitTest1)
	{
	public:
      
        TEST_METHOD(TestA_SecondTerm)
        {
            double a = A(0.5, 1, 0.5);                    
            Assert::AreEqual(-0.125, a, 0.000001);      
        }

       
        TEST_METHOD(TestA_ThirdTerm)
        {
            double a = A(0.5, 2, -0.125);                 
            Assert::AreEqual(0.0416667, a, 0.000001);
        }

        
        TEST_METHOD(TestS_Sum)
        {
            int n = 0;                                   
            double s = S(0.5, 0.0001, n, 0);             
            Assert::AreEqual(0.405435, s, 0.000001);      
            Assert::AreEqual(9, n);                      
        }

      
        TEST_METHOD(TestS_CompareWithLog)
        {
            int n = 0;
            double s = S(0.5, 0.000001, n, 0);            
            Assert::AreEqual(log(1.5), s, 0.00001);       
        }

        
        TEST_METHOD(TestS_Zero)
        {
            int n = 0;
            double s = S(0, 0.001, n, 0);
            Assert::AreEqual(0.0, s, 0.000001);
            Assert::AreEqual(1, n);

		}
	};
}
