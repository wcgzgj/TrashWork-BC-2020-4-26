#include "TrushMeun.h"
#include "TrashWork.h"
#include <iostream>
#include <string>
using namespace std;

int main()
{
	TrushMeun tm;
	TrashWork tw;
	tm.printMenu("菜单\\主菜单.txt");
	tm.pleaseInput();
	string str;
	cin>>str;
	str=tw.getTrushWork(str);
	tw.output(str);
	tw.writeBackToFile(str);
	/*string str="XXX是怎么回事呢？XXX相信大家都很熟悉，但是XXX是怎么回事呢，下面就让小编"\
		"带大家一起了解吧。"\
		"XXX，其实就是XXX，大家可能会很惊讶XXX怎么会XXX呢？但事实就是这样，"\
		"小编也感到非常惊讶。"\
		"这就是关于XXX的事情了，大家有什么看法呢，欢迎在评论区告诉小编一起讨论哦。";
	cout<<str;*/

	system("pause");
	return 0;
}
