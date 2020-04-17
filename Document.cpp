#include "Document.h"

Document::Document(int id, vector<string> tokens)
{
	this->id = id;
	this->tokens = tokens;
}

Document::Document(int id, string content)
{
	this->id = id;

}

Document::~Document()
{
}