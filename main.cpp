// 문제 클래스 바꾸는 법
// 1. 원하는 문제 클래스의 헤더를 불러온다.
// 2. codeBase에 문제 클래스를 생성한다.
#include "Intermediate_Coder/그래프탐색-DFS/CheckArea.h"

int main()
{
    Base* codeBase = new CheckArea();
    codeBase->Code();

    delete codeBase;
}