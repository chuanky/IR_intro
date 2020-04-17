#pragma once

#include <vector>
#include <string>
#include <regex>

using namespace std;

namespace m_utility {
	vector<string> string_to_tokens(const string& content)
	{
		regex re(" ");
		sregex_token_iterator itr(content.begin(), content.end(), re, -1);
		sregex_token_iterator end;
		vector<string> result;

		while (itr != end) {
			result.push_back(*itr++);
		}
		return result;
	}

	string tokens_to_string(const vector<string>& tokens)
	{
		string result;

		for (string s : tokens) {
			result.append(s + ' ');
		}

		return result;
	}
}