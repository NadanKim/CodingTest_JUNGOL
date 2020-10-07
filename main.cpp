#include "Base.h"
#include "Language_Coder/출력/자가진단/BasicPrint01.h"

int main()
{
    Base* codeBase = new BasicPrint01();
    codeBase->Run();

    delete codeBase;
}