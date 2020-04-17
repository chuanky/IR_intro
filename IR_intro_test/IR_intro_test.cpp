#include "pch.h"
#include "CppUnitTest.h"
#include "../Utility.h"

using namespace Microsoft::VisualStudio::CppUnitTestFramework;
using namespace std;

namespace IRintrotest
{
	TEST_CLASS(IRintrotest)
	{
	public:
		
		TEST_METHOD(string_to_tokens)
		{
			string content = "new home sales top forcasts";
			vector<string> tokens = m_utility::string_to_tokens(content);

			Assert::AreEqual(tokens[0].c_str(), "new");
			Assert::AreEqual(tokens[1].c_str(), "home");
			Assert::AreEqual(tokens[2].c_str(), "sales");
			Assert::AreEqual(tokens[3].c_str(), "top");
			Assert::AreEqual(tokens[4].c_str(), "forcasts");
		}
	};
}
