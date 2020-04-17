#pragma once
#include <vector>
#include <string>


using namespace std;

class Document
{
public:
	Document(int id, vector<string> tokens);
	Document(int id, string content);
	~Document();

private:
	int id;
	vector<string> tokens;
};