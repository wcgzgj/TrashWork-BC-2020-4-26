#include "TrushMeun.h"
#include "TrashWork.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	TrushMeun tm;
	TrashWork tw;
	tm.printMenu("�˵�\\���˵�.txt");
	tm.pleaseInput();
	string str;
	cin>>str;
	str=tw.getTrushWork(str);
	tw.output(str);
	tw.writeBackToFile(str);
	/*string str="XXX����ô�����أ�XXX���Ŵ�Ҷ�����Ϥ������XXX����ô�����أ��������С��"\
		"�����һ���˽�ɡ�"\
		"XXX����ʵ����XXX����ҿ��ܻ�ܾ���XXX��ô��XXX�أ�����ʵ����������"\
		"С��Ҳ�е��ǳ����ȡ�"\
		"����ǹ���XXX�������ˣ������ʲô�����أ���ӭ������������С��һ������Ŷ��";
	cout<<str;*/

	system("pause");
	return 0;
}
