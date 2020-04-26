#include "TrushMeun.h"
#include "TrashWork.h"
#include <fstream>
#include <Windows.h>
#include <iostream>

TrushMeun::TrushMeun(void)
{
}


TrushMeun::~TrushMeun(void)
{
}

//std::string UTF8ToGB(const char* str)//因为使用getline会出现乱码，所以只能这个样子
//{
//	std::string result;
//	WCHAR *strSrc;
//	LPSTR szRes;
//
//	int i = MultiByteToWideChar(CP_UTF8, 0, str, -1, NULL, 0);
//	strSrc = new WCHAR[i + 1];
//	MultiByteToWideChar(CP_UTF8, 0, str, -1, strSrc, i);
//
//	i = WideCharToMultiByte(CP_ACP, 0, strSrc, -1, NULL, 0, NULL, NULL);
//	szRes = new CHAR[i + 1];
//	WideCharToMultiByte(CP_ACP, 0, strSrc, -1, szRes, i, NULL, NULL);
//
//	result = szRes;
//	delete[]strSrc;
//	delete[]szRes;
//
//	return result;
//}

void TrushMeun::printMenu(std::string fname)
{
	TrashWork tw;
	std::ifstream fin(fname);
	std::string lineCnt;
	while(getline(fin,lineCnt))
	{
		std::string str;
		str=tw.UTF8toGB(lineCnt.c_str()).c_str();
		std::cout<<str<<std::endl;
	}
}

void TrushMeun::pleaseInput()
{
	printEndl(5);
	std::cout<<"请输入：";
}

void TrushMeun::printEndl(int n)
{
	for(int i=0;i<n;i++) std::cout<<std::endl;
}

void TrushMeun::printBlock(int n)
{
	for(int i=0;i<n;i++) std::cout<<" ";
}

void TrushMeun::clearScreem()
{
	system("cls");
}
