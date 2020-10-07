#include "Base.h"

int main()
{
    // 이 부분에서 생성하는 클래스만 변경한다.
    Base* codeBase = new Base();
    codeBase->Run();

    delete codeBase;
}