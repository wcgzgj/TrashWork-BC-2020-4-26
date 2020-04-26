#pragma once
#include <string>

class TrashWork
{
public:
	TrashWork(void);
	~TrashWork(void);
	void writeBackToFile(std::string str);
	std::string readFromFile(std::string fname);

	//************************************
	// Method:    getTrushWork
	// FullName:  TrashWork::getTrushWork
	// Access:    public 
	// Returns:   std::string
	// Qualifier: 生成营销号字符串
	// Parameter: std::string str
	//************************************
	std::string getTrushWork(std::string str);
	std::string UTF8toGB(const char* str);
	void output(std::string str);
};

