// 문제 클래스 바꾸는 법
// 1. 원하는 문제 클래스의 헤더를 불러온다.
// 2. codeBase에 문제 클래스를 생성한다.
#include "Language_Coder/구조체/형성평가/FormativeStruct05.h"

int main()
{
    Base* codeBase = new FormativeStruct05();
    codeBase->Code();

    delete codeBase;
}