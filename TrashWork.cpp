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
	std::ofstream fout("Ӫ�����ļ�\\Data.txt");
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
	cnt=str+"����ô�����أ�"+str+"���Ŵ�Ҷ�����Ϥ������"+str+"����ô�����أ��������С������һ���˽�ɡ�"+str+"����ʵ����"+str+"����ҿ��ܻ�ܾ���"+str+"��ô��"+str+"�أ�����ʵ����������С��Ҳ�е��ǳ����ȡ�����ǹ���"+str+"�������ˣ������ʲô�����أ���ӭ������������С��һ������Ŷ��";
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
