#include "TrashWork.h"
#include <string>
#include <fstream>
#include <iostream>
#include <Windows.h>

TrashWork::TrashWork(void)
{
}


TrashWork::~TrashWork(void)
{
}




void TrashWork::writeBackToFile(std::string str)
{
	std::ofstream fout("营销号文件\\Data.txt");
	/*int len=str.length();
	int lineCount=0;
	for(int i=0;i<len;i++)
	{
		fout<<str[i];
		lineCount++;
		if(lineCount==20)
		{
			fout<<std::endl;
			lineCount=0;
		}
	}*/
	fout<<str<<std::endl;
	fout.close();
}

std::string TrashWork::readFromFile(std::string fname)
{
	std::ifstream fin(fname);
	std::string str;
	std::string tmp;
	while (getline(fin,tmp))
	{
		str+=tmp;
	}
	return str;
}

std::string TrashWork::getTrushWork(std::string str)
{
	std::string cnt;
	cnt=str+"是怎么回事呢？"+str+"相信大家都很熟悉，但是"+str+"是怎么回事呢，下面就让小编带大家一起了解吧。"+str+"，其实就是"+str+"，大家可能会很惊讶"+str+"怎么会"+str+"呢？但事实就是这样，小编也感到非常惊讶。这就是关于"+str+"的事情了，大家有什么看法呢，欢迎在评论区告诉小编一起讨论哦。";
	str=UTF8toGB(cnt.c_str()).c_str();
	return cnt;
}

std::string TrashWork::UTF8toGB(const char* str)
{
	std::string result;
	WCHAR *strSrc;
	LPSTR szRes;

	int i = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
	strSrc = new WCHAR[i + 1];
	MultiByteToWideChar(CP_UTF8, 0, str, -1, strSrc, i);

	i = WideCharToMultiByte(CP_ACP, 0, strSrc, -1, NULL, 0, NULL, NULL);
	szRes = new CHAR[i + 1];
	WideCharToMultiByte(CP_ACP, 0, strSrc, -1, szRes, i, NULL, NULL);

	result = szRes;
	delete[]strSrc;
	delete[]szRes;

	return result;
}

void TrashWork::output(std::string str)
{
	/*int len=str.length();
	int lineCount=0;
	for (int i=0;i<len;i++)
	{
		std::cout<<str[i];
		lineCount++;
		if (lineCount==20)
		{
			std::cout<<std::endl;
			lineCount=0;
		}
	}*/
	std::cout<<str<<std::endl;
}
