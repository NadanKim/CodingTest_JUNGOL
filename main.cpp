// 불러오는 문제 클래스를 바꾸면 실행되는 문제를 바꿀 수 있다.
#include "Language_Coder/출력/자가진단/BasicPrint01.h"

int main()
{
    Base* codeBase = new CodingTest();
    codeBase->Code();

    delete codeBase;
}