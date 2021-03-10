#include "Testlib.h"
#include <string>

Testlib::Testlib() {}
Testlib::~Testlib() {}

void Testlib::Declare(std::string name)
{
    std::string out = "\x1B[33m" + name + "\033[0m\n";
    printf("%s", out.c_str());
}
void Testlib::Test_Assert(std::string name, bool assert)
{
    if (assert)
    {
        std::string out = "\x1B[32m--PASS--\033[0m\t" + name + "\n";
        printf("%s", out.c_str());
    }
    else
    {
        std::string out = "\x1B[31m--FAIL--\033[0m\t" + name + "\n";
        printf("%s", out.c_str());
    }
}
